
bool FUN_004444f0(int *param_1,int *param_2)

{
  if (*(long *)(param_1 + 2) == *(long *)(param_2 + 2)) {
    return *param_1 != *param_2;
  }
  return true;
}

