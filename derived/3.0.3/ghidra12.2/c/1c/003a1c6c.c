
bool FUN_003a1c6c(long *param_1,long *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  bVar1 = param_2[2] != 0 && (ulong)param_2[1] <= param_4;
  if (bVar1) {
    lVar5 = *param_2;
    *(undefined4 *)(param_1 + 1) = 0;
    bVar3 = param_3 != 0;
    *param_1 = lVar5;
    uVar2 = *(uint *)(param_2 + 0x13);
    *(char *)(param_1 + 10) = (char)uVar2;
    lVar4 = 0;
    if (param_2[3] != 0 && bVar3) {
      lVar4 = param_3 + param_2[6];
    }
    param_1[2] = lVar4;
    lVar4 = 0;
    if (param_2[7] != 0 && bVar3) {
      lVar4 = param_3 + param_2[10];
    }
    param_1[3] = lVar4;
    lVar7 = param_2[0xf];
    lVar8 = param_2[0x12];
    param_1[0xf] = 0;
    param_1[0x10] = param_3;
    param_1[6] = 0;
    param_1[7] = 0;
    lVar4 = 0;
    if (lVar7 != 0 && bVar3) {
      lVar4 = param_3 + lVar8;
    }
    param_1[8] = lVar4;
    param_1[9] = 0;
    lVar4 = 0;
    if (param_2[0xb] != 0 && bVar3) {
      lVar4 = param_3 + param_2[0xe];
    }
    FUN_003a295c(param_1 + 0xb,*(undefined2 *)(lVar5 + 0xe4),uVar2 & 0xff,lVar4);
    FUN_0039fe40(*param_1,param_1[2]);
    lVar4 = *param_1;
    uVar6 = 0;
    if ((ulong)*(byte *)(lVar4 + 0xea) != 0) {
      memmove((void *)param_1[3],(void *)param_1[2],(ulong)*(byte *)(lVar4 + 0xea) << 2);
      lVar4 = *param_1;
      uVar6 = (ulong)*(byte *)(lVar4 + 0xea);
    }
    lVar5 = *(long *)(lVar4 + 0x90) + uVar6 * 4;
    param_1[4] = lVar5;
    param_1[5] = lVar5 + ((ulong)*(byte *)(lVar4 + 0xeb) + (ulong)*(byte *)(lVar4 + 0xea)) *
                         (ulong)*(ushort *)(lVar4 + 0xe8) * 4;
  }
  return bVar1;
}

