@Library('shared-pipeline-library')_

pipeline {
    agent any
    options{
        skipDefaultCheckout()
    }
    stages{
        stage ('Example') {
            steps {
                script{
                    Execute()
                }
            }
        }
    }
    post {
      failure {
        updateGitlabCommitStatus name: 'build', state: 'failed'
      }
      success {
        updateGitlabCommitStatus name: 'build', state: 'success'
      }
    }
}