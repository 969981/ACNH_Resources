
void FUN_00834c4c(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if (((*(int *)(param_1 + 0x274) != DAT_04cd5b80) && (*(int *)(param_1 + 0x274) != DAT_04cd5b84))
     && (*(int *)(param_1 + 0x274) != DAT_04cd5b88)) {
    if ((param_2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x2ac) = 7;
      uVar7 = nn::os::GetSystemTick();
      uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
      uVar2 = uVar7 ^ uVar7 * 0x800;
      uVar5 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
      uVar7 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
      uVar6 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
      uVar3 = uVar2 ^ uVar6;
      uVar4 = uVar3 >> 0x1e;
      uVar7 = -uVar4;
      if ((int)(uVar5 ^ uVar5 * 0x800 ^ uVar2 >> 8 ^ uVar6 >> 0x13 ^ uVar3) < 0) {
        uVar7 = uVar4;
      }
      iVar8 = uVar7 + *(int *)(param_1 + 0x2ac);
    }
    else if (*(int *)(param_1 + 0x174) == 0) {
      lVar1 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar1 = *(long *)(param_1 + 0x70) + 0x278;
      }
      if (*(int *)(lVar1 + 8) != 6) {
        FUN_03ebb160(lVar1,6);
        *(undefined4 *)(param_1 + 0x274) = 6;
      }
      iVar8 = -1;
    }
    else {
      iVar8 = 0xd;
    }
    *(int *)(param_1 + 0x2ac) = iVar8;
  }
  return;
}

