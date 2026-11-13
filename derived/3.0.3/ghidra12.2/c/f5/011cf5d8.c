
void FUN_011cf5d8(undefined1 param_1 [16],float param_2,float param_3,long param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined2 uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  float local_6c;
  float fStack_68;
  float local_64;
  
  uVar9 = *(ulong *)(param_4 + 0x108);
  iVar4 = *(int *)(param_4 + 0x100);
  uVar6 = uVar9;
  if (iVar4 == 0x1c) {
    uVar6 = uVar9 | 0x20000000;
    *(ulong *)(param_4 + 0x108) = uVar6;
  }
  fVar13 = *(float *)(param_4 + 0xb8);
  fVar15 = *(float *)(param_4 + 0xbc);
  fVar14 = *(float *)(param_4 + 0xc0);
  iVar1 = *(int *)(param_4 + 0xb0);
  iVar2 = *(int *)(param_4 + 0xb4);
  if ((iVar1 == -1) && (iVar2 == -1)) {
    local_64 = fVar14 + 2.0;
    local_6c = fVar13;
    fStack_68 = fVar15;
  }
  else {
    if (iVar4 != 3) {
      if (iVar4 == 0x18) {
        local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
        local_6c = (float)iVar1 * 5.0 + 5.0;
        local_64 = (float)iVar2 * 5.0 + 5.0;
        lVar7 = *(long *)PTR_DAT_04bb27c8;
        if (((lVar7 == 0) || (*(long *)(lVar7 + 0xa8) == 0)) || (*(char *)(lVar7 + 0x11c8) != '\0'))
        {
          param_2 = -500.0;
        }
        else {
          param_2 = (float)FUN_0093a950(lVar7 + 0x28,&local_6c,&local_88);
        }
      }
      else {
        local_80 = 0;
        if (DAT_05aed670 == 0) {
          puVar10 = &DAT_055c04a0;
        }
        else {
          puVar10 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar10 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar4 = FUN_006bd550(*puVar10,0);
            puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar4 != 0x758f7eaf) {
              puVar10 = &DAT_055c04a0;
            }
          }
        }
        local_7c = *(undefined4 *)(puVar10 + 7);
        local_78 = FUN_017baf44();
        local_78 = local_78 & 1;
        local_88 = PTR_DAT_04bb6268 + 0x10;
        local_6c = (float)FUN_01a50ed0(&local_88,param_4,param_4 + 0xa8,uVar6 >> 2 & 1);
        local_64 = param_3;
      }
      goto LAB_011cf7c0;
    }
    local_6c = (float)iVar1 * 5.0 + 5.0;
    local_64 = (float)iVar2 * 5.0 + 5.0;
  }
  param_2 = (float)FUN_0093a950(DAT_04cfae30 + 0x28,&local_6c,0);
LAB_011cf7c0:
  fVar11 = *(float *)(param_4 + 0xf4);
  bVar3 = ((uVar9 & 4) == 0 & param_5) == 0;
  uVar5 = 0xf;
  if (bVar3) {
    uVar5 = 10;
  }
  *(undefined2 *)(param_4 + 0x112) = uVar5;
  uVar8 = 5;
  if (bVar3) {
    uVar8 = 0;
  }
  *(undefined1 *)(param_4 + 0x115) = uVar8;
  fVar12 = 0.08;
  if (bVar3) {
    fVar12 = 0.1;
  }
  *(float *)(param_4 + 200) =
       (param_2 -
       ((((fVar15 + fVar11 * -0.0) - fVar11) + fVar11 * -2.0 + fVar11 * -3.0 + fVar11 * -4.0 +
         fVar11 * -5.0 + fVar11 * -6.0 + fVar11 * -7.0 + fVar11 * -8.0 + fVar11 * -9.0) -
       fVar11 * 10.0)) / 10.0;
  *(float *)(param_4 + 0xcc) = fVar12 * (local_64 - fVar14);
  *(float *)(param_4 + 0xc4) = fVar12 * (local_6c - fVar13);
  return;
}

