
/* WARNING: Removing unreachable block (ram,0x011d0084) */

uint FUN_011cffb0(float param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined *puVar6;
  undefined1 **ppuVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  float fVar13;
  undefined1 *local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  byte local_48;
  
  uVar8 = *(ulong *)(param_2 + 0x108);
  if ((((param_4 & 1) != 0) || (((uint)uVar8 >> 8 & 1) == 0)) &&
     (*(ulong *)(param_2 + 0x108) = uVar8 | 0x40000000, (uVar8 & 0x80008) == 0)) {
    if (((uint)uVar8 >> 2 & 1) == 0) {
LAB_011d001c:
      switch(*(undefined4 *)(param_2 + 0xfc)) {
      case 0:
        local_58 = *(undefined **)(param_2 + 0xdc);
        local_50 = *(undefined8 *)(param_2 + 0xe4);
        uVar8 = *(ulong *)(param_2 + 0x108);
        if (((uint)uVar8 >> 0x11 & 1) != 0) {
          uVar4 = FUN_011e2720(param_2 + 0xa8);
          uVar8 = *(ulong *)(param_2 + 0x108);
          if ((uVar4 & 1) == ((uint)(uVar8 >> 0x12) & 1)) {
            uVar10 = uVar8 & 0x40000;
          }
          else {
            *(undefined1 *)(param_2 + 0x116) = 0x28;
            uVar8 = FUN_011e2720(param_2 + 0xa8);
            uVar10 = 0x40000;
            if ((uVar8 & 1) == 0) {
              uVar10 = 0;
            }
            uVar8 = *(ulong *)(param_2 + 0x108) & 0xfffffffffffbffff | uVar10;
            *(ulong *)(param_2 + 0x108) = uVar8;
          }
          bVar1 = *(byte *)(param_2 + 0x116);
          fVar13 = 1.0;
          if (uVar10 != 0) {
            fVar13 = param_1;
          }
          if (bVar1 != 0) {
            *(byte *)(param_2 + 0x116) = bVar1 - 1;
            fVar13 = *(float *)(param_2 + 0xf0) -
                     (*(float *)(param_2 + 0xf0) - fVar13) / (float)bVar1;
            *(float *)(param_2 + 0xf0) = fVar13;
          }
          local_58 = (undefined *)CONCAT44(fVar13,(undefined4)local_58);
        }
        bVar1 = *(byte *)(param_2 + 0x11a);
        if ((char)bVar1 < '\0') {
          if (*(int *)(param_2 + 0x100) == 0x19) goto switchD_011d003c_default;
          uVar12 = *(undefined4 *)(param_2 + 0xec);
          local_68 = (long *)CONCAT44(uVar12,uVar12);
          local_60 = (char *)CONCAT44(local_60._4_4_,uVar12);
          uVar12 = 0x41300000;
          if ((uVar8 & 0x100000000) != 0) {
            uVar12 = 0x3f800000;
          }
          uVar4 = FUN_007547dc(uVar12,param_3,param_2 + 0x38,param_2 + 8,&local_68,&local_58,1);
          if ((*(byte *)(param_2 + 0x10a) >> 6 & 1) == 0) break;
          if (((DAT_050de7f0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_050de7f0), iVar3 != 0))
          {
            local_68 = (long *)(PTR_DAT_04bb2020 + 0x10);
            local_60 = "PltVgtSoil";
            FUN_011c96f0(&DAT_050de798,&local_68);
            __cxa_guard_release(&DAT_050de7f0);
          }
          local_70 = *(undefined4 *)(param_2 + 0xec);
          puVar6 = &DAT_050de798;
          ppuVar7 = (undefined1 **)&local_78;
          local_78 = (undefined1 *)CONCAT44(local_70,local_70);
          uVar12 = 0x41300000;
          if ((*(ulong *)(param_2 + 0x108) & 0x100000000) != 0) {
            uVar12 = 0x3f800000;
          }
        }
        else {
          puVar11 = &DAT_050d8988 + (ulong)bVar1 * 5;
          if (0x77 < bVar1) {
            puVar11 = &DAT_050d8988;
          }
          local_78 = (undefined1 *)puVar11[2];
          local_70 = *(undefined4 *)(puVar11 + 3);
          uVar12 = 0x41300000;
          if ((uVar8 & 0x100000000) != 0) {
            uVar12 = 0x3f800000;
          }
          uVar4 = FUN_007547dc(uVar12,param_3,param_2 + 0x38,param_2 + 8,&local_78,&local_58,1);
          if ((*(byte *)(param_2 + 0x10a) >> 6 & 1) == 0) break;
          if (((DAT_050de790 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_050de790), iVar3 != 0))
          {
            local_68 = (long *)(PTR_DAT_04bb2020 + 0x10);
            local_60 = "PltVgtSoil";
            FUN_011c96f0(&DAT_050de738,&local_68);
            __cxa_guard_release(&DAT_050de790);
          }
          uVar8 = *(ulong *)(param_2 + 0x108);
          if ((uVar8 >> 0x24 & 1) == 0) {
            uVar12 = 0x41300000;
            if ((uVar8 & 0x100000000) != 0) {
              uVar12 = 0x3f800000;
            }
            puVar6 = &DAT_050de738;
            ppuVar7 = (undefined1 **)&local_78;
          }
          else {
            uVar12 = 0x41300000;
            if ((uVar8 & 0x100000000) != 0) {
              uVar12 = 0x3f800000;
            }
            local_84 = &DAT_3f8000003f800000;
            puVar6 = &DAT_050de738;
            local_7c = 0x3f800000;
            ppuVar7 = &local_84;
          }
        }
        local_60 = (char *)0x3f80000000000000;
        local_68 = (long *)0x0;
        FUN_007547dc(uVar12,param_3,puVar6,param_2 + 8,ppuVar7,&local_68,1);
        break;
      case 1:
      case 3:
        uVar12 = *(undefined4 *)(param_2 + 0xec);
        local_58 = (undefined *)CONCAT44(uVar12,uVar12);
        local_50 = CONCAT44(local_50._4_4_,uVar12);
        local_68 = (long *)((ulong)local_68 & 0xffffffff00000000);
        if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) + 0x138;
        }
        uVar4 = FUN_0161c2a0(0x41300000,param_3 + 0x11f0,param_2 + 0x38,param_2 + 8,&local_58,
                             param_2 + 0xdc,lVar9,0);
        break;
      case 2:
        bVar1 = *(byte *)(param_2 + 0x11a);
        if ((char)bVar1 < '\0') {
          uVar12 = *(undefined4 *)(param_2 + 0xec);
          local_58 = (undefined *)CONCAT44(uVar12,uVar12);
        }
        else {
          puVar11 = &DAT_050d8988 + (ulong)bVar1 * 5;
          if (0x77 < bVar1) {
            puVar11 = &DAT_050d8988;
          }
          local_58 = (undefined *)puVar11[2];
          uVar12 = *(undefined4 *)(puVar11 + 3);
        }
        local_50 = CONCAT44(local_50._4_4_,uVar12);
        uVar4 = FUN_007547dc(0x41300000,param_3,param_2 + 0x38,param_2 + 8,&local_58,param_2 + 0xdc,
                             0);
        break;
      default:
        goto switchD_011d003c_default;
      }
      goto LAB_011cfffc;
    }
    local_50 = (ulong)local_50._4_4_ << 0x20;
    local_58 = PTR_DAT_04bbfe68 + 0x10;
    lVar9 = *(long *)PTR_DAT_04bb2720;
    if (lVar9 == 0) {
      puVar11 = &DAT_055c04a0;
    }
    else {
      puVar11 = &DAT_055c04a0;
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar11 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
        iVar3 = FUN_006bd550(*puVar11,0);
        puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          puVar11 = &DAT_055c04a0;
        }
      }
    }
    local_50 = CONCAT44(*(undefined4 *)(puVar11 + 7),(undefined4)local_50);
    local_48 = FUN_017baf44();
    local_48 = local_48 & 1;
    local_58 = PTR_DAT_04bb5438 + 0x10;
    piVar5 = (int *)FUN_014fbd50(&local_58,0,param_2 + 0xa8);
    local_78 = (undefined1 *)CONCAT44(local_78._4_4_,*piVar5);
    if (*piVar5 != 0) {
      FUN_0071cb58(&local_68,&local_78,param_5,0);
      plVar2 = local_68;
      if (local_68 != (long *)0x0) {
        if (((*PTR_DAT_04bb2e60 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2e60), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb2e58 = PTR_DAT_04bb2000 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb2e60);
        }
        uVar8 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb2e58);
        if ((uVar8 & 1) == 0) {
          local_60._0_3_ = (uint3)(ushort)local_60;
        }
      }
      if (((local_68 != (long *)0x0) && ((char)local_60 != '\0')) &&
         ((local_60._2_1_ != '\0' &&
          ((local_68[0xc] != 0 && ((*(uint *)(local_68[0xc] + 0x11a0) >> 9 & 1) != 0))))))
      goto LAB_011d001c;
    }
  }
switchD_011d003c_default:
  uVar4 = 0;
LAB_011cfffc:
  return uVar4 & 1;
}

