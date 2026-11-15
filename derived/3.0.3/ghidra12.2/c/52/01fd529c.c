
undefined8 FUN_01fd529c(long param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  
  if (((((*(ushort *)(param_1 + 0xad28) >> (ulong)(*param_2 & 0x1f) & 1) == 0) &&
       ((*(ushort *)(param_1 + 0xad2a) >> (ulong)(*param_2 & 0x1f) & 1) == 0)) &&
      (*(int *)(param_1 + 0xaf88) == 0)) &&
     (((pcVar6 = *(char **)(*(long *)(param_1 + 8) + 1000), *pcVar6 == 'o' && (pcVar6[1] == 't')) &&
      (pcVar6[2] == 'g')))) {
    lVar2 = FUN_0252d9bc(0);
    if (lVar2 == 0) {
      uVar5 = 0;
    }
    else {
      if (DAT_05292338 == 0) {
        iVar4 = 0;
        iVar7 = 0x10;
      }
      else {
        iVar4 = *(int *)(DAT_05292338 + 0xd8c);
        iVar7 = *(int *)(DAT_05292338 + 0xd9c);
      }
      iVar1 = iVar4;
      if (iVar7 <= iVar4) {
        iVar1 = iVar7;
      }
      if (iVar4 <= iVar7) {
        iVar4 = iVar7;
      }
      uVar5 = (uint)(*(float *)(lVar2 + 8) < ((float)iVar1 * 5.0 + (float)iVar4 * 5.0 + 5.0) * 0.5);
    }
    *(uint *)(param_1 + 0x122b8) = uVar5;
    FUN_01fba3a0(param_1,PTR_DAT_04bb2150,0);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

