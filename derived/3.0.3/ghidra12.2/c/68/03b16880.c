
ulong FUN_03b16880(long *param_1,long *param_2,ulong param_3)

{
  ushort uVar1;
  long lVar2;
  ushort *puVar3;
  int iVar4;
  ulong uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auStack_98 [60];
  undefined4 local_5c;
  
  if (*param_2 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    FUN_00358b98(auStack_98);
    (**(code **)(*param_1 + 0x128))(param_1,auStack_98);
    if (((param_3 & 1) != 0) && (lVar2 = FUN_0037e610(param_1,"TextScaleOn"), lVar2 != 0)) {
      fVar10 = *(float *)(param_1 + 0x1f);
      if (*(float *)(param_1 + 0x2b) != 0.0) {
        fVar10 = *(float *)(param_1 + 0x2b);
      }
      fVar12 = *(float *)(lVar2 + (ulong)*(uint *)(lVar2 + 4));
      uVar11 = FUN_00350128(auStack_98);
      FUN_00350090(fVar10 * fVar12,uVar11,auStack_98);
    }
    local_5c = (undefined4)param_1[10];
    lVar2 = FUN_00358fcc(auStack_98,*param_2,(int)param_2[1]);
    puVar3 = (ushort *)*param_2;
    uVar9 = 0xffffffff;
    uVar5 = (ulong)(lVar2 - (long)puVar3) >> 1;
    iVar4 = (int)uVar5;
    if ((iVar4 <= (int)param_2[1]) && (0 < iVar4)) {
      if (((ulong)(lVar2 - (long)puVar3) >> 1 & 0xffffffff) == 0) {
        puVar6 = puVar3;
      }
      else {
        puVar8 = puVar3;
        do {
          uVar1 = *puVar8;
          if ((uVar1 & 0xfffe) == 0xe) {
            if (uVar1 == 0xf) {
              puVar7 = puVar8 + 3;
            }
            else {
              puVar7 = puVar8;
              if (uVar1 == 0xe) {
                puVar7 = (ushort *)((long)puVar8 + (ulong)puVar8[3] + 8);
              }
            }
          }
          else {
            puVar7 = puVar8 + 1;
          }
          puVar6 = puVar8;
          puVar8 = puVar7;
        } while (puVar7 < puVar3 + (uVar5 & 0xffffffff));
      }
      uVar9 = (ulong)((long)puVar6 - (long)puVar3) >> 1;
    }
    thunk_FUN_0035008c(auStack_98);
  }
  return uVar9 & 0xffffffff;
}

