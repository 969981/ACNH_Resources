
void FUN_02cdc270(undefined2 *param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (param_1 == (undefined2 *)0x0) {
    return;
  }
  uVar4 = *param_2;
  if (uVar4 == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + ((ulong)(uVar4 >> 0x11) & 0x7ff8));
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar4)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar4 = 1;
      goto joined_r0x02cdc334;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02cdc334;
    }
  }
  uVar4 = 0;
joined_r0x02cdc334:
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0x2a];
    if (((*PTR_DAT_04bb66a8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb66a8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb66a0 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb66a8);
    }
    uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb66a0);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar4;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      iVar3 = *(int *)((long)plVar10 + 0x174);
      lVar8 = *(long *)PTR_DAT_04bb46b0;
      if (lVar8 != 0) {
        puVar9 = *(undefined8 **)(lVar8 + 0x10);
        if ((*(byte *)(lVar8 + 0x453) & 1) == 0) {
          lVar8 = (**(code **)(*(long *)*puVar9 + 0x38))();
          if (lVar8 == 0) {
            return;
          }
          lVar8 = lVar8 + 0x70;
        }
        else {
          if (puVar9 == (undefined8 *)0x0) {
            return;
          }
          if ((long *)puVar9[0x26] == (long *)0x0) {
            return;
          }
          lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
          if (lVar8 == 0) {
            return;
          }
        }
        lVar8 = lVar8 + (long)iVar3 * 0x18b8;
        if ((*(long **)(lVar8 + 0x271d00) == (long *)0x0) ||
           (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x271d00), puVar9 == (undefined8 *)0x0)) {
          uVar4 = 1;
        }
        else {
          uVar4 = (**(code **)*puVar9)();
          uVar4 = uVar4 ^ 1;
        }
        puVar7 = (undefined2 *)
                 FUN_026e85f0(*(long *)(lVar8 + 0x271ce8) + *(long *)(lVar8 + 0x271ce0));
        *param_1 = *puVar7;
        *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar7 + 3);
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar7 + 2);
        puVar7 = (undefined2 *)
                 FUN_026e88f0(*(long *)(lVar8 + 0x271ce8) + *(long *)(lVar8 + 0x271ce0));
        param_1[4] = *puVar7;
        *(undefined1 *)(param_1 + 5) = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)((long)param_1 + 0xb) = *(undefined1 *)((long)puVar7 + 3);
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)(puVar7 + 2);
        puVar7 = (undefined2 *)
                 FUN_026e8b00(*(long *)(lVar8 + 0x271ce8) + *(long *)(lVar8 + 0x271ce0));
        param_1[8] = *puVar7;
        *(undefined1 *)(param_1 + 9) = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)((long)param_1 + 0x13) = *(undefined1 *)((long)puVar7 + 3);
        *(undefined4 *)(param_1 + 10) = *(undefined4 *)(puVar7 + 2);
        puVar7 = (undefined2 *)
                 FUN_026e8d10(*(long *)(lVar8 + 0x271ce8) + *(long *)(lVar8 + 0x271ce0));
        param_1[0xc] = *puVar7;
        *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)((long)param_1 + 0x1b) = *(undefined1 *)((long)puVar7 + 3);
        *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(puVar7 + 2);
        puVar7 = (undefined2 *)
                 FUN_026e9010(*(long *)(lVar8 + 0x271ce8) + *(long *)(lVar8 + 0x271ce0));
        param_1[0x10] = *puVar7;
        *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)((long)puVar7 + 3);
        *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(puVar7 + 2);
        puVar7 = (undefined2 *)
                 FUN_026e9240(*(long *)(lVar8 + 0x271ce8) + *(long *)(lVar8 + 0x271ce0));
        param_1[0x14] = *puVar7;
        *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)((long)param_1 + 0x2b) = *(undefined1 *)((long)puVar7 + 3);
        *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(puVar7 + 2);
        puVar7 = (undefined2 *)
                 FUN_026e9470(*(long *)(lVar8 + 0x271ce8) + *(long *)(lVar8 + 0x271ce0));
        param_1[0x18] = *puVar7;
        *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)((long)param_1 + 0x33) = *(undefined1 *)((long)puVar7 + 3);
        *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(puVar7 + 2);
        puVar7 = (undefined2 *)
                 FUN_026e96a0(*(long *)(lVar8 + 0x271ce8) + *(long *)(lVar8 + 0x271ce0));
        param_1[0x1c] = *puVar7;
        *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)puVar7 + 3);
        *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(puVar7 + 2);
        if ((((uVar4 & 1) == 0) && (*(long *)(lVar8 + 0x271d00) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x271d00) + 8), puVar9 != (undefined8 *)0x0)
           ) {
                    /* WARNING: Could not recover jumptable at 0x02cdc5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)*puVar9)();
          return;
        }
      }
    }
  }
  return;
}

