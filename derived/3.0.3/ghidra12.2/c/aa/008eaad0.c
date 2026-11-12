
/* WARNING: Removing unreachable block (ram,0x008eac80) */
/* WARNING: Removing unreachable block (ram,0x008eac90) */
/* WARNING: Removing unreachable block (ram,0x008eacac) */

void FUN_008eaad0(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_210;
  undefined **local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined *local_1f0;
  long *plStack_1e8;
  undefined4 local_1e0;
  long local_1d8;
  undefined1 *local_1d0;
  char local_c0 [32];
  undefined **local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 local_8c [31];
  undefined1 local_6d;
  
  (**(code **)(*param_3 + 0x10))(param_3,&DAT_040a90aa,1);
  FUN_006e9528(&local_1d8,&DAT_040c7be9,*(undefined1 *)(param_1 + 0x10));
  (**(code **)(local_1d8 + 0x18))(&local_1d8);
  puVar4 = local_1d0;
  (**(code **)(local_1d8 + 0x18))(&local_1d8);
  lVar7 = 0;
  do {
    if (local_1d0[lVar7] == '\0') goto LAB_008eab9c;
    if (local_1d0[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_008eab9c;
    }
    if (local_1d0[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_008eab9c;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_008eab9c:
  (**(code **)(*param_3 + 0x10))(param_3,puVar4,lVar7);
  (**(code **)(*param_3 + 0x10))(param_3,&DAT_04076993,2);
  if (*(char *)(param_1 + 0x13) != '\0') {
    uVar8 = 0;
    puVar1 = PTR_DAT_04bd0dc8 + 0x10;
    do {
      if (uVar8 != 0) {
        (**(code **)(*param_3 + 0x10))(param_3,&DAT_0408f28c,1);
      }
      plStack_1e8 = &local_1d8;
      *local_1d0 = 0;
      local_1e0 = 0;
      local_1f8 = 0;
      local_200 = 0x200000000;
      local_210 = &DAT_040f9094;
      lVar7 = *(long *)(param_1 + 8);
      local_208 = &local_1f0;
      local_1f0 = puVar1;
      uVar6 = FUN_038cf2b0(&local_210,local_c0);
      ppuVar3 = local_208;
      if ((uVar6 & 1) != 0) {
        local_6d = 0;
        local_90 = 0x20;
        local_8c[0] = 0;
        local_a0 = &PTR_LAB_048f9700;
        pcVar2 = "%f";
        if (local_c0[0] != '\0') {
          pcVar2 = local_c0;
        }
        local_98 = local_8c;
        uVar5 = FUN_038d1270((double)*(float *)(lVar7 + uVar8 * 4),&local_a0,pcVar2);
        (*(code *)local_a0[3])(&local_a0);
        (**(code **)(*ppuVar3 + 0x10))(ppuVar3,local_98,uVar5);
      }
      if (local_210 != (undefined *)0x0) {
        local_1f8 = 0;
        while( true ) {
          if (local_200._4_4_ <= (int)local_200) break;
          FUN_038cf2b0(&local_210,&local_a0);
        }
      }
      (**(code **)(local_1d8 + 0x18))(&local_1d8);
      puVar4 = local_1d0;
      (**(code **)(local_1d8 + 0x18))(&local_1d8);
      lVar7 = 0;
      do {
        if (local_1d0[lVar7] == '\0') goto LAB_008eac14;
        if (local_1d0[lVar7 + 1] == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_008eac14;
        }
        if (local_1d0[lVar7 + 2] == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_008eac14;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_008eac14:
      (**(code **)(*param_3 + 0x10))(param_3,puVar4,lVar7);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(byte *)(param_1 + 0x13));
  }
  (**(code **)(*param_3 + 0x10))(param_3,&DAT_040bf813,2);
  return;
}

