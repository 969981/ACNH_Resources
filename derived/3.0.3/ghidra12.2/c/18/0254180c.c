
/* WARNING: Removing unreachable block (ram,0x025418f4) */

void FUN_0254180c(undefined2 *param_1)

{
  long *plVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  long lVar9;
  
  uVar5 = DAT_0558600c;
  uVar4 = DAT_0558600b;
  uVar3 = DAT_0558600a;
  uVar2 = DAT_05586008;
  *param_1 = DAT_05586008;
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(undefined1 *)((long)param_1 + 3) = uVar4;
  *(undefined4 *)(param_1 + 2) = uVar5;
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 5) = uVar3;
  *(undefined1 *)((long)param_1 + 0xb) = uVar4;
  *(undefined4 *)(param_1 + 6) = uVar5;
  param_1[8] = uVar2;
  *(undefined1 *)(param_1 + 9) = uVar3;
  *(undefined1 *)((long)param_1 + 0x13) = uVar4;
  *(undefined4 *)(param_1 + 10) = uVar5;
  param_1[0xc] = uVar2;
  *(undefined1 *)(param_1 + 0xd) = uVar3;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar4;
  *(undefined4 *)(param_1 + 0xe) = uVar5;
  param_1[0x10] = uVar2;
  *(undefined1 *)(param_1 + 0x11) = uVar3;
  *(undefined1 *)((long)param_1 + 0x23) = uVar4;
  *(undefined4 *)(param_1 + 0x12) = uVar5;
  param_1[0x14] = uVar2;
  *(undefined1 *)(param_1 + 0x15) = uVar3;
  *(undefined1 *)((long)param_1 + 0x2b) = uVar4;
  *(undefined4 *)(param_1 + 0x16) = uVar5;
  param_1[0x18] = uVar2;
  *(undefined1 *)(param_1 + 0x19) = uVar3;
  *(undefined1 *)((long)param_1 + 0x33) = uVar4;
  *(undefined4 *)(param_1 + 0x1a) = uVar5;
  param_1[0x1c] = uVar2;
  *(undefined1 *)(param_1 + 0x1d) = uVar3;
  *(undefined1 *)((long)param_1 + 0x3b) = uVar4;
  *(undefined4 *)(param_1 + 0x1e) = uVar5;
  param_1[0x20] = uVar2;
  *(undefined1 *)(param_1 + 0x21) = uVar3;
  lVar9 = *(long *)PTR_DAT_04bb46b0;
  *(undefined1 *)((long)param_1 + 0x43) = uVar4;
  *(undefined4 *)(param_1 + 0x22) = uVar5;
  if (((lVar9 != 0) && (((*(byte *)(lVar9 + 0x50d) ^ 0xff) & 6) == 0)) &&
     (lVar9 = (**(code **)(**(long **)(*(long *)(lVar9 + 0x10) + 0x188) + 0x30))(), lVar9 != 0)) {
    plVar1 = (long *)(lVar9 + 0x5d7870);
    if ((*(long **)(lVar9 + 0x5d7890) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar9 + 0x5d7890), puVar7 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar7)();
      uVar6 = uVar6 ^ 1;
    }
    puVar8 = (undefined2 *)FUN_026e85f0(*(long *)(lVar9 + 0x5d7878) + *plVar1);
    *param_1 = *puVar8;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar8 + 1);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar8 + 3);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar8 + 2);
    puVar8 = (undefined2 *)FUN_026e88f0(*(long *)(lVar9 + 0x5d7878) + *plVar1);
    param_1[4] = *puVar8;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(puVar8 + 1);
    *(undefined1 *)((long)param_1 + 0xb) = *(undefined1 *)((long)puVar8 + 3);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(puVar8 + 2);
    puVar8 = (undefined2 *)FUN_026e8b00(*(long *)(lVar9 + 0x5d7878) + *plVar1);
    param_1[8] = *puVar8;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(puVar8 + 1);
    *(undefined1 *)((long)param_1 + 0x13) = *(undefined1 *)((long)puVar8 + 3);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(puVar8 + 2);
    puVar8 = (undefined2 *)FUN_026e8d10(*(long *)(lVar9 + 0x5d7878) + *plVar1);
    param_1[0xc] = *puVar8;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(puVar8 + 1);
    *(undefined1 *)((long)param_1 + 0x1b) = *(undefined1 *)((long)puVar8 + 3);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(puVar8 + 2);
    puVar8 = (undefined2 *)FUN_026e9010(*(long *)(lVar9 + 0x5d7878) + *plVar1);
    param_1[0x10] = *puVar8;
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(puVar8 + 1);
    *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)((long)puVar8 + 3);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(puVar8 + 2);
    puVar8 = (undefined2 *)FUN_026e9240(*(long *)(lVar9 + 0x5d7878) + *plVar1);
    param_1[0x14] = *puVar8;
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(puVar8 + 1);
    *(undefined1 *)((long)param_1 + 0x2b) = *(undefined1 *)((long)puVar8 + 3);
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(puVar8 + 2);
    puVar8 = (undefined2 *)FUN_026e9470(*(long *)(lVar9 + 0x5d7878) + *plVar1);
    param_1[0x18] = *puVar8;
    *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(puVar8 + 1);
    *(undefined1 *)((long)param_1 + 0x33) = *(undefined1 *)((long)puVar8 + 3);
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(puVar8 + 2);
    puVar8 = (undefined2 *)FUN_026e96a0(*(long *)(lVar9 + 0x5d7878) + *plVar1);
    param_1[0x1c] = *puVar8;
    *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(puVar8 + 1);
    *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)puVar8 + 3);
    *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(puVar8 + 2);
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar9 + 0x5d7890) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x5d7890) + 8), puVar7 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02541ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar7)();
      return;
    }
  }
  return;
}

