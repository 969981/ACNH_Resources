
/* WARNING: Removing unreachable block (ram,0x02cdba68) */

void FUN_02cdba20(undefined2 *param_1,byte *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  
  if ((((*param_2 < 8) && (DAT_05574040 != 0)) &&
      (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0)) &&
     (lVar3 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
     lVar3 != 0)) {
    plVar1 = (long *)(lVar3 + 0x5d7870);
    if ((*(long **)(lVar3 + 0x5d7890) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x5d7890), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    puVar5 = (undefined2 *)FUN_026e85f0(*(long *)(lVar3 + 0x5d7878) + *plVar1);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined2 *)FUN_026e88f0(*(long *)(lVar3 + 0x5d7878) + *plVar1);
    param_1[4] = *puVar5;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 0xb) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined2 *)FUN_026e8b00(*(long *)(lVar3 + 0x5d7878) + *plVar1);
    param_1[8] = *puVar5;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 0x13) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined2 *)FUN_026e8d10(*(long *)(lVar3 + 0x5d7878) + *plVar1);
    param_1[0xc] = *puVar5;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 0x1b) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined2 *)FUN_026e9010(*(long *)(lVar3 + 0x5d7878) + *plVar1);
    param_1[0x10] = *puVar5;
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined2 *)FUN_026e9240(*(long *)(lVar3 + 0x5d7878) + *plVar1);
    param_1[0x14] = *puVar5;
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 0x2b) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined2 *)FUN_026e9470(*(long *)(lVar3 + 0x5d7878) + *plVar1);
    param_1[0x18] = *puVar5;
    *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 0x33) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined2 *)FUN_026e96a0(*(long *)(lVar3 + 0x5d7878) + *plVar1);
    param_1[0x1c] = *puVar5;
    *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(puVar5 + 2);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x5d7890) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x5d7890) + 8), puVar4 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02cdbc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)();
      return;
    }
  }
  return;
}

