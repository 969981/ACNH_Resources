
/* WARNING: Removing unreachable block (ram,0x02c48b58) */

void FUN_02c48b10(long param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  uint *local_c8;
  int local_c0;
  uint local_bc;
  undefined1 local_b8;
  undefined1 local_7d;
  byte local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined8 local_6c;
  
  local_e0 = CONCAT44(local_e0._4_4_,3);
  puVar8 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  uVar5 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc7278);
  if ((uVar5 & 1) == 0) {
    return;
  }
  local_7d = 0;
  local_bc = local_bc & 0xffffff00;
  local_c8 = &local_bc;
  local_c0 = 0x40;
  local_e0 = 0xffffffffffffffff;
  uStack_d8 = 0xffffffffffffffff;
  local_d0 = PTR_DAT_04bb2bc0 + 0x10;
  local_6c = 0xffffffffffffffff;
  local_74 = 0;
  local_70 = 0;
  local_78 = *(byte *)(param_1 + 0x1f8);
  if (7 < local_78) {
    local_78 = 0xff;
  }
  if (*(int *)(param_1 + 0x2d8) < 0) {
    uVar5 = (ulong)*(uint *)(param_1 + 0x2a8);
    if ((int)*(uint *)(param_1 + 0x2a8) < 1) goto LAB_02c48d58;
    uVar11 = 0;
    uVar10 = 0;
    do {
      if (((uVar11 < (uVar5 & 0xffffffff)) &&
          (lVar7 = *(long *)(*(long *)(param_1 + 0x2b0) + uVar11 * 8),
          lVar7 != 0 && uVar11 != *(uint *)(param_1 + 0x2dc))) &&
         (plVar9 = *(long **)(lVar7 + 0x388), plVar9 != (long *)0x0)) {
        iVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,0);
        iVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,1);
        lVar6 = *(long *)(plVar9[0xd] + (long)(iVar3 + (int)plVar9[0xc] * iVar4) * 0x18);
        if ((lVar6 != 0) && (*(long *)(lVar6 + 8) != 0)) {
          lVar7 = *(long *)(lVar7 + 0x388);
          if (*(char *)(lVar7 + 0x20) == '\0') {
            iVar3 = *(int *)(lVar7 + 0x28);
          }
          else {
            piVar1 = (int *)(lVar7 + 0x24);
            if (*(char *)(lVar7 + 0x21) != '\0') {
              piVar1 = (int *)(lVar7 + 0x28);
            }
            iVar3 = *piVar1;
          }
          if (iVar3 == 0) {
            uVar10 = uVar10 | 1 << (ulong)((uint)uVar11 & 0x1f) & 0xffU;
          }
        }
      }
      puVar2 = local_c8;
      uVar5 = (ulong)*(int *)(param_1 + 0x2a8);
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)uVar5);
    if (uVar10 == 0) goto LAB_02c48d58;
    local_e0 = CONCAT44(local_e0._4_4_,4);
    if (local_c8 != (uint *)&DAT_04093111) {
      iVar3 = 4;
      if (local_c0 < 5) {
        iVar3 = local_c0 + -1;
      }
      memcpy(local_c8,&DAT_04093111,(long)iVar3);
      *(undefined1 *)((long)puVar2 + (long)iVar3) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x2d8) == *(int *)(param_1 + 0x2dc)) goto LAB_02c48d58;
    local_e0 = 0xffffffff00000004;
    local_bc = 0x35303338;
    local_b8 = 0;
  }
  FUN_02ee2b00(puVar8,&local_e0,1);
LAB_02c48d58:
  puVar2 = local_c8;
  if ((*(long *)(param_1 + 0x210) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x210) + 0xa0), lVar7 != 0)) {
    local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar7 + 0x14));
    if (local_c8 != (uint *)&DAT_0408869c) {
      iVar3 = 4;
      if (local_c0 < 5) {
        iVar3 = local_c0 + -1;
      }
      memcpy(local_c8,&DAT_0408869c,(long)iVar3);
      *(undefined1 *)((long)puVar2 + (long)iVar3) = 0;
    }
    FUN_02ee2b00(puVar8,&local_e0,1);
  }
  return;
}

