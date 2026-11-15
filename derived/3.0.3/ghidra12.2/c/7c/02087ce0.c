
/* WARNING: Removing unreachable block (ram,0x02087ec0) */
/* WARNING: Removing unreachable block (ram,0x02087ea4) */
/* WARNING: Removing unreachable block (ram,0x02087edc) */

uint FUN_02087ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  float local_84;
  float fStack_80;
  float local_7c;
  long local_78;
  char local_6e;
  undefined4 local_64;
  
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x48);
  if (lVar7 == 0) {
    return 0;
  }
  local_84 = *(float *)(lVar7 + 0x230);
  FUN_0071cb58(&local_78,param_2,&local_84,0);
  puVar3 = PTR_DAT_04bb37b8;
  puVar2 = PTR_DAT_04bb37b0;
  uVar5 = 0;
  if ((local_6e != '\0') && (local_78 != 0)) {
    lVar7 = *(long *)(local_78 + 0x68);
    if (lVar7 == 0) {
      uVar5 = 0;
    }
    else {
      if (*(long *)(local_78 + 0xb0) != local_78 + 0xa8) {
        lVar9 = (long)*(int *)(local_78 + 0xbc);
        plVar8 = (long *)(*(long *)(local_78 + 0xb0) - lVar9);
        puVar1 = PTR_DAT_04bb3070 + 0x10;
        do {
          if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
            *(undefined **)puVar2 = puVar1;
            __cxa_guard_release(puVar3);
          }
          if ((plVar8 != (long *)0x0) &&
             (uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar2), (uVar6 & 1) != 0)) {
            local_7c = 0.0;
            local_64 = 10;
            if (plVar8[9] != 0) {
              lVar9 = *(long *)(plVar8[9] + 0x68);
              fStack_80 = 0.0;
              local_84 = 0.0;
              if (lVar9 != 0) {
                local_84 = *(float *)(plVar8 + 0x2ae) * *(float *)(lVar9 + 0x2a0);
                fStack_80 = *(float *)((long)plVar8 + 0x1574) * *(float *)(lVar9 + 0x2a4);
                local_7c = *(float *)(plVar8 + 0x2af) * *(float *)(lVar9 + 0x2a8);
              }
              goto LAB_02087dfc;
            }
            break;
          }
          plVar8 = (long *)(*(long *)((long)plVar8 + lVar9 + 8) - lVar9);
        } while (plVar8 != (long *)((local_78 + 0xa8) - lVar9));
      }
      local_7c = 0.0;
      fStack_80 = 0.0;
      local_84 = 0.0;
LAB_02087dfc:
      local_84 = local_84 + *(float *)(lVar7 + 0x278);
      fStack_80 = fStack_80 + *(float *)(lVar7 + 0x27c);
      local_7c = local_7c + *(float *)(lVar7 + 0x280);
      uVar5 = FUN_02087eec(param_1,&local_84,param_3);
    }
  }
  return uVar5 & 1;
}

