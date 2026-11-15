
uint FUN_022bca8c(long param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  float fVar11;
  byte local_9c [4];
  undefined1 auStack_98 [8];
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  undefined7 uStack_6f;
  undefined *local_68;
  float local_60;
  uint uStack_5c;
  byte local_54 [4];
  
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar2 = *(int *)PTR_DAT_04bbbc58;
  if (iVar1 != iVar2) {
    *(int *)(param_1 + 0x3c) = iVar2;
  }
  local_90 = PTR_DAT_04bb2010 + 0x10;
  local_78 = 0;
  local_88 = 0;
  local_60 = (float)((int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0) & 0xfffffffe);
  uStack_5c = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0) & 0xfffffffe;
  local_68 = local_90;
  if (DAT_05aed670 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar9 + 7);
  local_70 = FUN_017baf44();
  local_70 = local_70 & 1;
  local_80 = PTR_DAT_04bb6268 + 0x10;
  FUN_01a5033c(auStack_98,&local_80,0,&local_68,&local_90);
  lVar6 = DAT_05150358;
  if (DAT_05150358 == 0) goto LAB_022bcdb0;
  uVar4 = 0;
  if ((*(long *)(DAT_05150358 + 0xb0) == 0) ||
     (uVar4 = 0, *(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0)) goto LAB_022bcdb4;
  uVar4 = 0;
  if ((*(long *)(DAT_05150358 + 0x488) == 0) ||
     (uVar4 = 0, *(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0)) goto LAB_022bcdb4;
  uVar4 = 0;
  if ((*(long *)(DAT_05150358 + 0x2b0) == 0) ||
     (uVar4 = 0, *(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0)) goto LAB_022bcdb4;
  uVar4 = FUN_0277d6c4(auStack_98);
  uVar5 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
  if (uVar5 < *(uint *)(lVar6 + 0x1d8)) {
    uVar4 = 0;
    if (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8) == 0) goto LAB_022bcdb4;
    FUN_0124c030(&local_80,auStack_98);
    uVar5 = FUN_0123d890(CONCAT71(uStack_6f,local_70),4);
    if (((uVar5 & 1) != 0) ||
       (iVar3 = FUN_0123db50(&local_78,CONCAT71(uStack_6f,local_70)), iVar3 == 0x2e)) {
      pbVar10 = (byte *)(param_1 + 0x10);
      local_54[0] = *pbVar10;
      if (7 < local_54[0]) {
        local_54[0] = 0xff;
      }
      local_60 = (float)local_88._4_4_ * 5.0 + 5.0;
      local_68 = (undefined *)CONCAT44(local_68._4_4_,(float)(int)local_88 * 5.0 + 5.0);
      lVar6 = FUN_0251b3b0(local_54,0);
      if ((lVar6 != 0) && (DAT_04cfae30 != 0)) {
        fVar11 = (float)FUN_0093a950(DAT_04cfae30 + 0x28,&local_68,0);
        uVar4 = 0;
        fVar11 = fVar11 - *(float *)(lVar6 + 4);
        if ((5.0 < fVar11) || (fVar11 < -5.0)) goto LAB_022bcdb4;
        uVar4 = FUN_022a9384(param_1,&local_90);
        if (((uVar5 | uVar4) & 1) != 0) {
          uVar4 = uVar4 ^ 1;
          goto LAB_022bcdb4;
        }
        bVar8 = *pbVar10;
        if (7 < bVar8) {
          bVar8 = 0xff;
        }
        local_68 = (undefined *)CONCAT71(local_68._1_7_,bVar8);
        if (*(char *)(param_2 + 3) != '\0') {
LAB_022bcd4c:
          uVar4 = 1;
          goto LAB_022bcdb4;
        }
        if ((*(byte *)(*DAT_0537d558 + 0x476) < 2) &&
           (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x24a26848)) {
          local_9c[0] = bVar8;
          uVar7 = FUN_01251510(&local_80,local_9c,1);
          if ((uVar7 & 1) == 0) goto LAB_022bcd4c;
          if (iVar1 != iVar2) {
            FUN_011c1480(pbVar10,PTR_DAT_04bb37e0,0);
            goto LAB_022bcd94;
          }
        }
        else if (iVar1 != iVar2) {
LAB_022bcd94:
          FUN_01229330(*(undefined8 *)PTR_DAT_04bb4778,&local_68,&local_90,0);
        }
      }
    }
  }
LAB_022bcdb0:
  uVar4 = 0;
LAB_022bcdb4:
  return uVar4 & 1;
}

