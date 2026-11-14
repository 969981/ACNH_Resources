
/* WARNING: Removing unreachable block (ram,0x01834694) */
/* WARNING: Removing unreachable block (ram,0x018346a4) */
/* WARNING: Removing unreachable block (ram,0x018346b0) */

undefined8 FUN_0183464c(long param_1,uint param_2,long param_3,ulong param_4,undefined1 *param_5)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  undefined **local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  undefined7 uStack_57;
  uint local_34;
  
  local_68 = (undefined **)((ulong)local_68 & 0xffffffff00000000);
  lVar4 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if ((((lVar4 != 0) &&
       (*(int *)(lVar4 + 0x20) <= *(int *)(param_3 + 8) &&
        *(int *)(param_3 + 8) <= *(int *)(lVar4 + 0x30))) &&
      (*(int *)(lVar4 + 0x24) <= *(int *)(param_3 + 0xc))) &&
     (*(int *)(param_3 + 0xc) <= *(int *)(lVar4 + 0x34))) {
    local_80 = 0xfffe;
    FUN_0277d4ac(&local_80);
    local_90 = &DAT_048f9750;
    local_88 = 0;
    local_60 = 0;
    local_68 = &PTR_LAB_049ffa38;
    if (DAT_05aed670 == 0) {
      puVar5 = &DAT_055c04a0;
    }
    else {
      puVar5 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar5 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar5,0);
        puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar5 = &DAT_055c04a0;
        }
      }
    }
    local_5c = *(undefined4 *)(puVar5 + 7);
    local_58 = FUN_017baf44();
    local_58 = local_58 & 1;
    puVar5 = (undefined8 *)FUN_01a5190c(&local_68,0,param_3,&local_90);
    lVar4 = DAT_05150358;
    local_80 = *puVar5;
    if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
         ((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
          ((*(long *)(DAT_05150358 + 0x488) != 0 &&
           (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))))) &&
        (*(long *)(DAT_05150358 + 0x2b0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)) {
      uVar3 = FUN_0277d6c4(&local_80);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        FUN_0124c030(&local_68,&local_80);
        iVar2 = FUN_0123db50(&local_60,CONCAT71(uStack_57,local_58));
        if (iVar2 - 0x23U < 9) {
          if (CONCAT71(uStack_57,local_58) != 0) {
            local_78 = (ulong)(uint)local_78._4_4_ << 0x20;
            lVar4 = FUN_01246470(CONCAT71(uStack_57,local_58),0x16,0x623dc307,
                                 *(undefined8 *)PTR_DAT_04bbbc98);
            if (lVar4 != 0) {
              uVar3 = (int)(float)local_78 + 7;
              if (-1 < (int)(float)local_78) {
                uVar3 = (uint)(float)local_78;
              }
              if ((*(byte *)(lVar4 + (ulong)(uint)((int)uVar3 >> 3)) >>
                   (ulong)((uint)(float)local_78 & 7) & 1) != 0) {
                return 0;
              }
            }
          }
          *(undefined4 *)(param_1 + 0x32c) = 0;
          local_34 = 0;
          lVar4 = DAT_04cfae30 + 0x28;
          local_70 = (float)local_88._4_4_ * 5.0 + 5.0;
          fVar6 = (float)(int)local_88 * 5.0 + 5.0;
          *(float *)(param_1 + 0x330) = local_70;
          *(float *)(param_1 + 0x328) = fVar6;
          local_78 = (ulong)(uint)fVar6;
          uVar7 = FUN_0093a950(lVar4,&local_78,&local_34);
          *(undefined4 *)(param_1 + 0x32c) = uVar7;
          puVar1 = PTR_DAT_04bb47e0;
          local_70 = 0.0;
          local_78 = 0;
          if ((param_4 & 1) != 0) {
            uVar7 = FUN_0123db50(&local_60,CONCAT71(uStack_57,local_58));
            local_34 = local_34 & 0xffffff00;
            FUN_01970940(*(undefined8 *)puVar1,&local_34,uVar7);
            param_2 = local_34 & 0xff;
            if (param_5 != (undefined1 *)0x0) {
              *param_5 = (undefined1)local_34;
            }
          }
          FUN_0196ffcc(*(undefined8 *)puVar1,&local_78,param_1 + 0x328,param_2);
          *(int *)(param_1 + 0x5b8) = (int)local_88;
          *(int *)(param_1 + 0x5bc) = local_88._4_4_;
          *(float *)(param_1 + 0x328) = *(float *)(param_1 + 0x328) + (float)local_78;
          *(float *)(param_1 + 0x32c) = *(float *)(param_1 + 0x32c) + local_78._4_4_;
          *(float *)(param_1 + 0x330) = *(float *)(param_1 + 0x330) + local_70;
          return 1;
        }
      }
    }
  }
  return 0;
}

