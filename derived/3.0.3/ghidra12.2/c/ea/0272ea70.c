
void FUN_0272ea70(long *param_1,undefined4 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  puVar3 = PTR_DAT_04bb3350;
  lVar5 = param_1[1];
  if (*param_1 == 0 || lVar5 == 0) {
    return;
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  if (*(int *)(lVar5 + 8) != 0) {
    uVar6 = 0;
    do {
      if (*(long *)(*(long *)(lVar5 + 0x10) + (-(uVar6 >> 0x1f) & 0xfffffff000000000 | uVar6 << 4))
          == lVar4) {
        if (*(char *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar6 * 0x10 + 8) != '\0') {
          return;
        }
        break;
      }
      uVar1 = uVar6 + 1;
      uVar6 = uVar1 & 0xffffffff;
    } while (*(int *)(lVar5 + 8) != (int)uVar1);
  }
  lVar4 = param_1[1];
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
  iVar2 = *(int *)(lVar4 + 8);
  if (iVar2 != 0) {
    lVar4 = *(long *)(lVar4 + 0x10);
    uVar6 = 0;
    do {
      if (*(long *)(lVar4 + (-(uVar6 >> 0x1f) & 0xfffffff000000000 | uVar6 << 4)) == lVar5) {
        if (*(char *)(lVar4 + (long)(int)uVar6 * 0x10 + 8) == '\0') {
          return;
        }
        break;
      }
      uVar1 = uVar6 + 1;
      uVar6 = uVar1 & 0xffffffff;
    } while (iVar2 != (int)uVar1);
  }
  FUN_038569c0(param_1[1]);
  *(undefined4 *)*param_1 = param_2;
  FUN_03856a80(param_1[1]);
  return;
}

