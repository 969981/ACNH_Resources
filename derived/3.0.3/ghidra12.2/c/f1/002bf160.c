
void FUN_002bf160(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 0x90);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    FUN_00285dc0(puVar3);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x88);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    FUN_00285dc0(puVar3);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(long *)(param_1 + 200) != 0) {
    FUN_0030644c();
    puVar3 = *(undefined8 **)(param_1 + 200);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_00285dc0(puVar3);
    }
    *(undefined8 *)(param_1 + 200) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x168);
  if (plVar4 != (long *)0x0) {
    uVar2 = FUN_002212e4(plVar4);
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_0022131c(plVar4);
      if ((uVar2 & 1) != 0) {
        *(undefined1 *)(plVar4 + 9) = 1;
        do {
          FUN_00227860(plVar4,5);
          uVar2 = FUN_002212e4(plVar4);
          if ((uVar2 & 1) == 0) break;
          uVar2 = FUN_0022131c(plVar4);
        } while ((uVar2 & 1) != 0);
      }
      (**(code **)(*plVar4 + 0x20))(plVar4);
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x168);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_00285dc0(puVar3);
    }
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x218);
  if (plVar4 != (long *)0x0) {
    uVar2 = FUN_002212e4(plVar4);
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_0022131c(plVar4);
      if ((uVar2 & 1) != 0) {
        *(undefined1 *)(plVar4 + 9) = 1;
        do {
          FUN_00227860(plVar4,5);
          uVar2 = FUN_002212e4(plVar4);
          if ((uVar2 & 1) == 0) break;
          uVar2 = FUN_0022131c(plVar4);
        } while ((uVar2 & 1) != 0);
      }
      (**(code **)(*plVar4 + 0x20))(plVar4);
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x218);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_00285dc0(puVar3);
    }
    *(undefined8 *)(param_1 + 0x218) = 0;
  }
  if (*(long *)(param_1 + 0x220) != 0) {
    FUN_002cc338();
    puVar3 = *(undefined8 **)(param_1 + 0x220);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_00285dc0(puVar3);
    }
    *(undefined8 *)(param_1 + 0x220) = 0;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_00313854();
    puVar3 = *(undefined8 **)(param_1 + 0x70);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_00285dc0(puVar3);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x170);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    FUN_00285dc0(puVar3);
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x178);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    FUN_00285dc0(puVar3);
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x180);
  if (puVar3 == (undefined8 *)0x0) goto LAB_002bf404;
  if (*(int *)((long)puVar3 + 0x14) == 1) {
    FUN_00197980(puVar3);
    puVar3 = *(undefined8 **)(param_1 + 0x180);
    if (puVar3 != (undefined8 *)0x0) goto LAB_002bf3e8;
  }
  else {
LAB_002bf3e8:
    (**(code **)*puVar3)(puVar3);
    FUN_00285dc0(puVar3);
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
LAB_002bf404:
  if (*(long **)(param_1 + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x80) + 0x20))();
    puVar3 = *(undefined8 **)(param_1 + 0x80);
    if ((long *)puVar3[4] != (long *)0x0) {
      (**(code **)(*(long *)puVar3[4] + 0x18))();
      puVar3[4] = 0;
      puVar3 = *(undefined8 **)(param_1 + 0x80);
    }
    (**(code **)*puVar3)(puVar3);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 != 0) {
    FUN_00285e00(lVar5);
    FUN_00285dc0(lVar5);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (*(long **)(param_1 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x20))();
    (**(code **)**(undefined8 **)(param_1 + 0x68))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  lVar5 = *(long *)(param_1 + 0x60);
  if (lVar5 != 0) {
    FUN_00285e00(lVar5);
    FUN_00285dc0(lVar5);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  lVar5 = param_1 + 0x108;
  if (*(int *)(param_1 + 0x108) == 1) {
    FUN_00221064(lVar5);
    FUN_00220f24(lVar5);
    iVar1 = *(int *)(param_1 + 0x138);
  }
  else {
    FUN_00220f24(lVar5);
    iVar1 = *(int *)(param_1 + 0x138);
  }
  if (iVar1 == 1) {
    FUN_00221064(param_1 + 0x138);
    FUN_00220f24(param_1 + 0x138);
    iVar1 = *(int *)(param_1 + 0xd8);
  }
  else {
    FUN_00220f24(param_1 + 0x138);
    iVar1 = *(int *)(param_1 + 0xd8);
  }
  if (iVar1 == 1) {
    FUN_00221064(param_1 + 0xd8);
    FUN_00220f24(param_1 + 0xd8);
    lVar5 = *(long *)(param_1 + 0x98);
  }
  else {
    FUN_00220f24(param_1 + 0xd8);
    lVar5 = *(long *)(param_1 + 0x98);
  }
  if (lVar5 != 0) {
    FUN_00226914(lVar5);
    FUN_00285dc0(lVar5);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return;
}

