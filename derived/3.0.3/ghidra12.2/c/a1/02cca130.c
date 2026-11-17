
bool FUN_02cca130(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined2 local_54 [2];
  
  if (DAT_04c487d4 == -1) {
    return false;
  }
  puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = PTR_DAT_04bc39f8;
  }
  if ((((*(uint *)(puVar1 + 4) & 1) == 0) || (DAT_0537d558 == 0)) ||
     (*(int *)(DAT_0537d558 + 0x80) != 3)) {
    bVar5 = false;
  }
  else {
    bVar5 = false;
    iVar3 = -1;
    do {
      if (((-1 < iVar3) && (uVar2 = (**(code **)(*param_1 + 0x4b0))(param_1), (uVar2 & 1) != 0)) &&
         (!bVar5)) {
        (**(code **)(*param_1 + 0x4b8))(local_54,param_1,iVar3);
        *(undefined2 *)((long)param_1 + 0x1c48a) = local_54[0];
        if (*(int *)((long)param_1 + (ulong)*(byte *)(param_1 + 0x40) * 4 + 0x1f0) == -1) {
          *(undefined4 *)((long)param_1 + (ulong)*(byte *)(param_1 + 0x40) * 4 + 0x1f0) = 9;
        }
        bVar5 = true;
      }
      iVar4 = 10;
      if (iVar3 < 10) {
        iVar4 = iVar3 + 1;
      }
      iVar3 = iVar4;
    } while (iVar4 != 10);
  }
  return bVar5;
}

