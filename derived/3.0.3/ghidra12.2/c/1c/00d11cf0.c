
/* WARNING: Removing unreachable block (ram,0x00d11db4) */

void FUN_00d11cf0(long param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined *local_248;
  undefined8 *puStack_240;
  undefined *local_238;
  char *pcStack_230;
  undefined *local_228;
  undefined8 *puStack_220;
  undefined4 local_218;
  undefined1 local_214;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined *local_1f8;
  undefined1 *puStack_1f0;
  undefined4 local_1e8;
  undefined1 local_1e4 [63];
  undefined1 local_1a5;
  undefined *local_1a0;
  undefined1 *puStack_198;
  undefined4 local_190;
  undefined1 local_18c [63];
  undefined1 local_14d;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  uint local_44;
  
  uVar2 = *(undefined4 *)(param_1 + 0x108);
  local_48 = 0;
  local_44 = 5;
  FUN_00d12138(&local_48,param_1 + 0x130);
  switch(local_48) {
  case 0:
    local_44 = 0;
    break;
  case 1:
    local_44 = 1;
    break;
  case 2:
    local_44 = 2;
    break;
  case 3:
    local_44 = 3;
    break;
  case 4:
    local_44 = 4;
    break;
  case 5:
    lVar8 = *(long *)PTR_DAT_04bb46b0;
    if (((lVar8 != 0) &&
        (local_228 = (undefined *)CONCAT44(local_228._4_4_,1),
        ((*(byte *)(lVar8 + 0x50d) ^ 0xff) & 6) == 0)) &&
       (lVar8 = (**(code **)(**(long **)(*(long *)(lVar8 + 0x10) + 0x188) + 0x38))(), lVar8 != 0)) {
      if (*(long **)(lVar8 + 0x36620) == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        puVar5 = (undefined8 *)**(long **)(lVar8 + 0x36620);
        uVar6 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          uVar6 = (**(code **)*puVar5)();
        }
      }
      iVar4 = (int)*(char *)(*(long *)(lVar8 + 0x36608) + *(long *)(lVar8 + 0x36600));
      local_228 = (undefined *)CONCAT44(local_228._4_4_,iVar4);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar8 + 0x36620) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0x36620) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if (iVar4 == 2) {
        if ((*(long **)(lVar8 + 0x37ca8) == (long *)0x0) ||
           (puVar5 = (undefined8 *)**(long **)(lVar8 + 0x37ca8), puVar5 == (undefined8 *)0x0)) {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)*puVar5)();
          uVar3 = uVar3 ^ 1;
        }
        local_44 = (uint)*(ushort *)
                          (*(long *)(lVar8 + 0x37c90) + *(long *)(lVar8 + 0x37c88) + 0x408c);
        if ((((uVar3 & 1) == 0) && (*(long *)(lVar8 + 0x37ca8) != 0)) &&
           (puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0x37ca8) + 8), puVar5 != (undefined8 *)0x0))
        {
          (**(code **)*puVar5)();
        }
      }
    }
    if (local_44 == 5) {
      return;
    }
    break;
  default:
    goto switchD_00d11d48_default;
  }
  uVar3 = local_44;
  local_214 = 0;
  local_218 = 0x80;
  local_210 = 0xffffffff;
  uStack_208 = 0xffffffff00000000;
  puStack_220 = &local_148;
  local_200 = 0xffffffff;
  puStack_1f0 = local_1e4;
  local_1e8 = 0x40;
  local_1a5 = 0;
  local_1e4[0] = 0;
  local_1f8 = PTR_DAT_04bb2bc0 + 0x10;
  local_190 = 0x40;
  local_14d = 0;
  local_18c[0] = 0;
  puStack_198 = local_18c;
  local_228 = PTR_DAT_04bb6b38 + 0x10;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  puVar1 = &local_48;
  if (&local_48 <= (undefined4 *)((long)&local_148 + 2U)) {
    puVar1 = (undefined4 *)((long)&local_148 + 2U);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_1a0 = local_1f8;
  memset(puStack_220,0,(long)puVar1 + (-0xe0 - (long)&local_228));
  iVar4 = *param_2;
  if (iVar4 == 2) {
    local_248 = PTR_DAT_04bb2020 + 0x10;
    pcStack_230 = "STR_Common";
    if ((int)uVar3 < 5) {
      if (4 < uVar3) {
        uVar3 = 0;
      }
      puStack_240 = (undefined8 *)(&PTR_DAT_04b29518)[(int)uVar3];
    }
    else {
      puStack_240 = &DAT_0407ebb1;
    }
    local_238 = local_248;
    FUN_006f50a0(&local_228,&local_238,&local_248,0);
    uVar10 = 1;
  }
  else if (iVar4 == 1) {
    FUN_03780f10(uVar3,&local_228);
    uVar10 = 4;
  }
  else {
    if (iVar4 != 0) {
      return;
    }
    FUN_03780780(uVar3,&local_228);
    uVar10 = 3;
  }
  psVar7 = (short *)(**(code **)(local_228 + 0x18))(&local_228);
  iVar4 = (**(code **)(local_228 + 0x20))(&local_228);
  if (((psVar7 != (short *)0x0) && (iVar4 != 0)) && (*psVar7 != 0)) {
    local_238 = (undefined *)CONCAT44(local_238._4_4_,uVar10);
    uVar9 = *(undefined8 *)(**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 0x20) + 8);
    if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar4 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
      uVar6 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar6 * 4) == 0x96) goto LAB_00d120bc;
        uVar6 = uVar6 + 1;
      } while (*(uint *)PTR_DAT_04bc0a80 != uVar6);
    }
    uVar6 = 0;
LAB_00d120bc:
    local_248 = (undefined *)CONCAT44(local_248._4_4_,(int)uVar6);
    FUN_01bae480(uVar9,&local_228,uVar2,&local_248,(ulong)local_238 & 0xffffffff);
  }
switchD_00d11d48_default:
  return;
}

