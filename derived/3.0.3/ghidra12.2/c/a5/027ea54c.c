
void FUN_027ea54c(byte *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (DAT_05574040 != 0) {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar2 == 0) {
        return;
      }
      lVar2 = lVar2 + 0x70;
    }
    else {
      if (puVar4 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar4[0x26] == (long *)0x0) {
        return;
      }
      lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
      if (lVar2 == 0) {
        return;
      }
    }
    plVar1 = (long *)(lVar2 + 0xe7270);
    if ((*(long **)(lVar2 + 0xe7290) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar2 + 0xe7290), puVar4 == (undefined8 *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)*puVar4)();
      uVar3 = uVar3 & 0xffffffff;
    }
    uVar5 = (ulong)*param_1;
    if (((uVar5 < 0x23) && (param_1[1] <= (byte)PTR_DAT_04bc27f0[uVar5])) &&
       (((uint)(&DAT_053e6eb8)[uVar5] >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
      FUN_02691128(param_1,*(long *)(lVar2 + 0xe7278) + *plVar1);
    }
    uVar5 = (ulong)param_1[0x13230];
    if (((uVar5 < 0x23) && (param_1[0x13231] <= (byte)PTR_DAT_04bc27f0[uVar5])) &&
       (((uint)(&DAT_053e6eb8)[uVar5] >> (ulong)(param_1[0x13231] & 0x1f) & 1) != 0)) {
      FUN_02691128(param_1 + 0x13230,*(long *)(lVar2 + 0xe7278) + *plVar1);
    }
    uVar5 = (ulong)param_1[0x26460];
    if (((uVar5 < 0x23) && (param_1[0x26461] <= (byte)PTR_DAT_04bc27f0[uVar5])) &&
       (((uint)(&DAT_053e6eb8)[uVar5] >> (ulong)(param_1[0x26461] & 0x1f) & 1) != 0)) {
      FUN_02691128(param_1 + 0x26460,*(long *)(lVar2 + 0xe7278) + *plVar1);
    }
    uVar5 = (ulong)param_1[0x39690];
    if (((uVar5 < 0x23) && (param_1[0x39691] <= (byte)PTR_DAT_04bc27f0[uVar5])) &&
       (((uint)(&DAT_053e6eb8)[uVar5] >> (ulong)(param_1[0x39691] & 0x1f) & 1) != 0)) {
      FUN_02691128(param_1 + 0x39690,*(long *)(lVar2 + 0xe7278) + *plVar1);
    }
    uVar5 = (ulong)param_1[0x4c8c0];
    if (((uVar5 < 0x23) && (param_1[0x4c8c1] <= (byte)PTR_DAT_04bc27f0[uVar5])) &&
       (((uint)(&DAT_053e6eb8)[uVar5] >> (ulong)(param_1[0x4c8c1] & 0x1f) & 1) != 0)) {
      FUN_02691128(param_1 + 0x4c8c0,*(long *)(lVar2 + 0xe7278) + *plVar1);
    }
    uVar5 = (ulong)param_1[0x5faf0];
    if (((uVar5 < 0x23) && (param_1[0x5faf1] <= (byte)PTR_DAT_04bc27f0[uVar5])) &&
       (((uint)(&DAT_053e6eb8)[uVar5] >> (ulong)(param_1[0x5faf1] & 0x1f) & 1) != 0)) {
      FUN_02691128(param_1 + 0x5faf0,*(long *)(lVar2 + 0xe7278) + *plVar1);
    }
    uVar5 = (ulong)param_1[0x72d20];
    if (((uVar5 < 0x23) && (param_1[0x72d21] <= (byte)PTR_DAT_04bc27f0[uVar5])) &&
       (((uint)(&DAT_053e6eb8)[uVar5] >> (ulong)(param_1[0x72d21] & 0x1f) & 1) != 0)) {
      FUN_02691128(param_1 + 0x72d20,*(long *)(lVar2 + 0xe7278) + *plVar1);
    }
    uVar5 = (ulong)param_1[0x85f50];
    if (((uVar5 < 0x23) && (param_1[0x85f51] <= (byte)PTR_DAT_04bc27f0[uVar5])) &&
       (((uint)(&DAT_053e6eb8)[uVar5] >> (ulong)(param_1[0x85f51] & 0x1f) & 1) != 0)) {
      FUN_02691128(param_1 + 0x85f50,*(long *)(lVar2 + 0xe7278) + *plVar1);
    }
    uVar5 = (ulong)param_1[0x99180];
    if (((uVar5 < 0x23) && (param_1[0x99181] <= (byte)PTR_DAT_04bc27f0[uVar5])) &&
       (((uint)(&DAT_053e6eb8)[uVar5] >> (ulong)(param_1[0x99181] & 0x1f) & 1) != 0)) {
      FUN_02691128(param_1 + 0x99180,*(long *)(lVar2 + 0xe7278) + *plVar1);
    }
    uVar5 = (ulong)param_1[0xac3b0];
    if (((uVar5 < 0x23) && (param_1[0xac3b1] <= (byte)PTR_DAT_04bc27f0[uVar5])) &&
       (((uint)(&DAT_053e6eb8)[uVar5] >> (ulong)(param_1[0xac3b1] & 0x1f) & 1) != 0)) {
      FUN_02691128(param_1 + 0xac3b0,*(long *)(lVar2 + 0xe7278) + *plVar1);
    }
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0xe7290) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0xe7290) + 8), puVar4 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x027ea934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)();
      return;
    }
  }
  return;
}

