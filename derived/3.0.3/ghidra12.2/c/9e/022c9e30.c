
uint FUN_022c9e30(byte *param_1,uint param_2,long param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  int *piVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  byte local_74 [4];
  undefined8 local_70;
  uint local_68;
  int local_64;
  byte local_60;
  undefined7 uStack_5f;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  bVar5 = *param_1;
  FUN_0252d8f0(&local_70);
  bVar6 = 7 < bVar5;
  if (bVar6) {
    bVar5 = 0xff;
  }
  puVar1 = (undefined4 *)(&DAT_0547bacc + ((long)(char)bVar5 & 0xffffffffU) * 4);
  if (bVar6) {
    puVar1 = (undefined4 *)&DAT_0547bacc;
  }
  *puVar1 = (undefined4)local_70;
  puVar1[1] = local_70._4_4_;
  local_48 = *(undefined4 *)(param_3 + 8);
  uStack_44 = *(undefined4 *)(param_3 + 0xc);
  local_50 = &DAT_048f9750;
  FUN_011dc8e4(&local_50);
  lVar10 = *DAT_0537d558;
  bVar5 = *(byte *)(lVar10 + 0x473);
  if ((long)(char)bVar5 == 0xffffffffffffffff) {
LAB_022c9eec:
    bVar5 = *param_1;
    uVar8 = (uint)bVar5;
    bVar6 = 7 < uVar8;
    if (bVar6) {
      uVar8 = 0xffffffff;
    }
    uVar12 = (uint)bVar5;
    if (bVar6) {
      uVar12 = 0xff;
    }
    puVar11 = &DAT_0547b068 + (ulong)uVar8 * 0xc;
    if (bVar6) {
      uVar12 = 0xffffffff;
    }
    if (7 < uVar8) {
      puVar11 = &DAT_0547b068;
    }
    *(uint *)((long)puVar11 + 0xc) = uVar12;
    if (bVar5 < 8) {
      *(byte *)(puVar11 + 2) = bVar5;
    }
    *(undefined1 *)((long)puVar11 + 0x11) = 1;
    local_58 = 0xfffe;
    FUN_0277d4ac(&local_58);
    uVar9 = FUN_0122a4e0(param_2);
    if ((uVar9 & 1) == 0) {
      bVar6 = DAT_055c1b60 == &DAT_055c1b58;
      puVar13 = DAT_055c1b60 + -8;
      if (((param_2 & 0xffff) != 0) && (puVar13 != &DAT_055c1b18)) {
        puVar13 = DAT_055c1b60;
        uVar8 = param_2;
        do {
          puVar13 = (undefined8 *)puVar13[1];
          uVar8 = uVar8 - 1;
          bVar6 = puVar13 == &DAT_055c1b58;
        } while (!bVar6 && (uVar8 & 0xffff) != 0);
        puVar13 = puVar13 + -8;
      }
      puVar3 = &DAT_055c04a0;
      if (!bVar6) {
        puVar3 = puVar13;
      }
      local_64 = *(int *)(puVar3 + 7);
      uVar9 = 0;
      do {
        piVar4 = &DAT_0516b108 + uVar9;
        local_68 = (uint)uVar9;
        if (0x38 < local_68) {
          piVar4 = &DAT_0516b108;
        }
        if (*piVar4 == local_64) {
          if (local_68 != 0) goto LAB_022ca084;
          break;
        }
        uVar8 = 0x39;
        if ((int)local_68 < 0x39) {
          uVar8 = local_68 + 1;
        }
        uVar9 = (ulong)uVar8;
      } while (uVar8 != 0x39);
    }
    else {
      local_68 = 0;
      if (DAT_05aed670 == 0) {
        puVar13 = &DAT_055c04a0;
      }
      else {
        puVar13 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar13 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar7 = FUN_006bd550(*puVar13,0);
          puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar7 != 0x758f7eaf) {
            puVar13 = &DAT_055c04a0;
          }
        }
      }
      local_64 = *(int *)(puVar13 + 7);
LAB_022ca084:
      local_60 = FUN_017baf44();
      local_60 = local_60 & 1;
      local_70 = PTR_DAT_04bb6268 + 0x10;
      puVar13 = (undefined8 *)FUN_01a5190c(&local_70,0,param_3,0);
      lVar10 = DAT_05150358;
      local_58 = *puVar13;
      if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
           (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
          ((*(long *)(DAT_05150358 + 0x488) != 0 &&
           (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
         ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
          (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))) {
        uVar8 = FUN_0277d6c4(&local_58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          FUN_0124c030(&local_70,&local_58);
          iVar7 = FUN_0123db50(&local_68,CONCAT71(uStack_5f,local_60));
          if (iVar7 == 0x2e) {
            local_74[0] = *param_1;
            if (7 < local_74[0]) {
              local_74[0] = 0xff;
            }
            uVar9 = FUN_01251510(&local_70,local_74,0);
            uVar8 = 0;
            if ((uVar9 & 1) == 0) {
              uVar8 = FUN_022b97bc(puVar11,0xd,0,param_2,param_3,param_4,1);
            }
            goto LAB_022ca1c0;
          }
        }
      }
    }
  }
  else {
    pbVar2 = (byte *)(lVar10 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x80;
    if (7 < bVar5) {
      pbVar2 = (byte *)(lVar10 + 0x48);
    }
    if (((*pbVar2 >> 3 & 1) == 0) || (*(byte *)(lVar10 + 0x472) == bVar5)) goto LAB_022c9eec;
  }
  uVar8 = 0;
LAB_022ca1c0:
  return uVar8 & 1;
}

