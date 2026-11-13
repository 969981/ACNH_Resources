
void FUN_012f2ed0(long param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 local_cc;
  short local_c8;
  short local_c6;
  short local_c4;
  short local_c2;
  
  if (*param_2 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    bVar2 = *(byte *)((long)param_2 + 0x39);
    *(uint *)(param_1 + 8) = (uint)bVar2;
    uVar1 = (uint)bVar2;
    if (*(char *)((long)param_2 + 0x3a) != '\0') {
      uVar1 = bVar2 | 2;
    }
    *(uint *)(param_1 + 8) = uVar1;
    if (*(char *)((long)param_2 + 0x3b) != '\0') {
      uVar1 = uVar1 | 4;
    }
    *(uint *)(param_1 + 8) = uVar1;
    fVar8 = *(float *)((long)param_2 + 0xc);
    fVar9 = *(float *)((long)param_2 + 0x14);
    *(float *)(param_1 + 0xc) = fVar8;
    fVar8 = fVar8 + -10.0;
    fVar9 = fVar9 + -10.0;
    *(int *)(param_1 + 0x10) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
    *(int *)(param_1 + 0x18) = (int)param_2[3];
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
    *(int *)(param_1 + 0x20) = (int)param_2[4];
    iVar3 = (int)((float)(int)fVar8 / 10.0) - (uint)(fVar8 < 0.0);
    iVar4 = (int)((float)(int)*(float *)((long)param_2 + 0xc) / 10.0) -
            (uint)(*(float *)((long)param_2 + 0xc) < 0.0);
    iVar5 = (int)((float)(int)fVar9 / 10.0) - (uint)(fVar9 < 0.0);
    iVar6 = (int)((float)(int)*(float *)((long)param_2 + 0x14) / 10.0) -
            (uint)(*(float *)((long)param_2 + 0x14) < 0.0);
    *(int *)(param_1 + 0x30) = iVar4;
    *(int *)(param_1 + 0x34) = iVar6;
    fVar8 = *(float *)(param_2 + 3);
    fVar9 = *(float *)(param_2 + 4);
    *(int *)(param_1 + 0x80) = iVar3;
    *(int *)(param_1 + 0x84) = iVar5;
    *(int *)(param_1 + 0x90) = iVar3 + 2;
    *(int *)(param_1 + 0x94) = iVar5 + 2;
    *(int *)(param_1 + 0x68) = iVar4;
    *(int *)(param_1 + 0x6c) = iVar6;
    *(uint *)(param_1 + 0x40) = (int)((float)(int)fVar8 / 10.0) - (uint)(fVar8 < 0.0);
    *(uint *)(param_1 + 0x44) = (int)((float)(int)fVar9 / 10.0) - (uint)(fVar9 < 0.0);
    lVar7 = param_2[5];
    *(long *)(param_1 + 0x48) = lVar7;
    *(long *)(param_1 + 0x50) = param_2[6];
    if (param_2[5] != 0) {
      FUN_0131a4e4(&local_cc);
      local_cc = CONCAT22((short)*(int *)(param_1 + 0x34),(short)*(int *)(param_1 + 0x30));
      fVar8 = (float)*(int *)(param_1 + 0x30) * 10.0 + 5.0 + -10.0;
      fVar9 = (float)*(int *)(param_1 + 0x34) * 10.0 + 5.0 + -10.0;
      local_c8 = (short)(int)((float)(int)fVar8 / 10.0) - (ushort)(fVar8 < 0.0);
      local_c4 = local_c8 + 2;
      local_c6 = (short)(int)((float)(int)fVar9 / 10.0) - (ushort)(fVar9 < 0.0);
      local_c2 = local_c6 + 2;
      FUN_0130a960(param_2[5],&local_cc);
      FUN_01300740(param_1 + 0x98,&local_cc,param_1 + 0x28);
      lVar7 = *(long *)(param_1 + 0x48);
    }
    if (lVar7 != 0) {
      iVar3 = *(int *)(param_1 + 0x30);
      if ((*(int *)(lVar7 + 0x18) <= iVar3) && (iVar3 <= *(int *)(lVar7 + 0x28))) {
        iVar4 = *(int *)(param_1 + 0x34);
        if (((*(int *)(lVar7 + 0x1c) <= iVar4) &&
            (((iVar4 <= *(int *)(lVar7 + 0x2c) && (*(int *)(param_1 + 0x80) <= iVar3)) &&
             (iVar3 <= *(int *)(param_1 + 0x90))))) &&
           ((((*(int *)(param_1 + 0x84) <= iVar4 && (iVar4 <= *(int *)(param_1 + 0x94))) &&
             (iVar3 = *(int *)(param_1 + 0x40), *(int *)(lVar7 + 0x18) <= iVar3)) &&
            (((iVar3 <= *(int *)(lVar7 + 0x28) &&
              (iVar4 = *(int *)(param_1 + 0x44), *(int *)(lVar7 + 0x1c) <= iVar4)) &&
             (((iVar4 <= *(int *)(lVar7 + 0x2c) &&
               (((*(int *)(param_1 + 0x80) <= iVar3 && (iVar3 <= *(int *)(param_1 + 0x90))) &&
                (*(int *)(param_1 + 0x84) <= iVar4)))) && (iVar4 <= *(int *)(param_1 + 0x94)))))))))
        {
          iVar3 = (int)param_2[1];
          if (iVar3 == 2) {
            FUN_012f51ac(param_1,*param_2,(char)param_2[7]);
            return;
          }
          if (iVar3 == 1) {
            FUN_012f4994(param_1,*param_2,*(undefined4 *)((long)param_2 + 0x24));
            return;
          }
          if (iVar3 == 0) {
            FUN_012f3250(param_1,*param_2);
            return;
          }
          return;
        }
      }
    }
    *(undefined4 *)(*param_2 + 0xc) = 2;
    *(uint *)(*param_2 + 0x10) = *(uint *)(*param_2 + 0x10) | 2;
  }
  return;
}

