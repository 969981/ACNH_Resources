
void FUN_002d3de0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  
  *param_1 = (long)(PTR_DAT_04bce918 + 0x10);
  plVar1 = (long *)param_1[7];
  param_1[0xb] = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
    (*(code *)**(undefined8 **)param_1[0xb])();
    param_1[0xb] = 0;
    param_1[7] = 0;
  }
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    FUN_00285e00(lVar3);
    FUN_00285dc0(lVar3);
    param_1[3] = 0;
  }
  plVar1 = (long *)param_1[8];
  param_1[0xb] = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
    (*(code *)**(undefined8 **)param_1[0xb])();
    param_1[0xb] = 0;
    param_1[8] = 0;
  }
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    FUN_00285e00(lVar3);
    FUN_00285dc0(lVar3);
    param_1[4] = 0;
  }
  plVar1 = (long *)param_1[9];
  param_1[0xb] = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
    (*(code *)**(undefined8 **)param_1[0xb])();
    param_1[0xb] = 0;
    param_1[9] = 0;
  }
  lVar3 = param_1[5];
  if (lVar3 != 0) {
    FUN_00285e00(lVar3);
    FUN_00285dc0(lVar3);
    param_1[5] = 0;
  }
  plVar1 = (long *)param_1[10];
  param_1[0xb] = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
    (*(code *)**(undefined8 **)param_1[0xb])();
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    FUN_00285e00(lVar3);
    FUN_00285dc0(lVar3);
    param_1[6] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x10];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[0x10] = 0;
  }
  plVar1 = (long *)param_1[0x11];
  if (plVar1 != (long *)0x0) {
    if (plVar1[2] != 0) {
      lVar3 = *plVar1;
      plVar5 = (long *)plVar1[1];
      plVar1[2] = 0;
      lVar2 = *plVar5;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar3 + 8);
      **(long **)(lVar3 + 8) = lVar2;
      while (plVar5 != plVar1) {
        plVar6 = (long *)plVar5[1];
        (**(code **)plVar5[2])();
        FUN_00187e4c(plVar5);
        plVar5 = plVar6;
      }
    }
    FUN_00285dc0(plVar1);
    param_1[0x11] = 0;
  }
  plVar1 = (long *)param_1[0x13];
  if (plVar1 != (long *)0x0) {
    if (plVar1[2] != 0) {
      lVar3 = *plVar1;
      plVar5 = (long *)plVar1[1];
      plVar1[2] = 0;
      lVar2 = *plVar5;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar3 + 8);
      **(long **)(lVar3 + 8) = lVar2;
      while (plVar5 != plVar1) {
        plVar6 = (long *)plVar5[1];
        (**(code **)plVar5[2])();
        FUN_00187e4c(plVar5);
        plVar5 = plVar6;
      }
    }
    FUN_00285dc0(plVar1);
    param_1[0x13] = 0;
  }
  plVar1 = (long *)param_1[0x12];
  if (plVar1 != (long *)0x0) {
    if (plVar1[2] != 0) {
      lVar3 = *plVar1;
      plVar5 = (long *)plVar1[1];
      plVar1[2] = 0;
      lVar2 = *plVar5;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar3 + 8);
      **(long **)(lVar3 + 8) = lVar2;
      while (plVar5 != plVar1) {
        plVar6 = (long *)plVar5[1];
        (**(code **)plVar5[2])();
        FUN_00187e4c(plVar5);
        plVar5 = plVar6;
      }
    }
    FUN_00285dc0(plVar1);
    param_1[0x12] = 0;
  }
  plVar1 = (long *)param_1[0x23];
  if (plVar1 != (long *)0x0) {
    if (plVar1[2] != 0) {
      lVar3 = *plVar1;
      plVar5 = (long *)plVar1[1];
      plVar1[2] = 0;
      lVar2 = *plVar5;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar3 + 8);
      **(long **)(lVar3 + 8) = lVar2;
      while (plVar5 != plVar1) {
        plVar6 = (long *)plVar5[1];
        (**(code **)plVar5[2])();
        FUN_00187e4c(plVar5);
        plVar5 = plVar6;
      }
    }
    FUN_00285dc0(plVar1);
    param_1[0x23] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x1a];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[0x1a] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x15];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[0x15] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x16];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[0x16] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x17];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[0x17] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x18];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[0x18] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x19];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[0x19] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x1b];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[0x1b] = 0;
  }
  plVar1 = (long *)param_1[0x1c];
  if (plVar1 != (long *)0x0) {
    if (plVar1[2] != 0) {
      lVar3 = *plVar1;
      plVar5 = (long *)plVar1[1];
      plVar1[2] = 0;
      lVar2 = *plVar5;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar3 + 8);
      **(long **)(lVar3 + 8) = lVar2;
      while (plVar5 != plVar1) {
        plVar6 = (long *)plVar5[1];
        (**(code **)plVar5[2])();
        FUN_00187e4c(plVar5);
        plVar5 = plVar6;
      }
    }
    FUN_00285dc0(plVar1);
    param_1[0x1c] = 0;
  }
  plVar1 = (long *)param_1[0x1e];
  param_1[0x1d] = 0;
  if (plVar1 != (long *)0x0) {
    if (plVar1[2] != 0) {
      lVar3 = *plVar1;
      plVar5 = (long *)plVar1[1];
      plVar1[2] = 0;
      lVar2 = *plVar5;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar3 + 8);
      **(long **)(lVar3 + 8) = lVar2;
      while (plVar5 != plVar1) {
        plVar5 = (long *)plVar5[1];
        FUN_00187e4c();
      }
    }
    FUN_00285dc0(plVar1);
    param_1[0x1e] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x1f];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[0x1f] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x24];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[0x24] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x21];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[0x21] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x22];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[0x22] = 0;
  }
  plVar1 = (long *)param_1[0x25];
  param_1[0x14] = 0;
  if (plVar1 != (long *)0x0) {
    if (plVar1[2] != 0) {
      lVar3 = *plVar1;
      plVar5 = (long *)plVar1[1];
      plVar1[2] = 0;
      lVar2 = *plVar5;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar3 + 8);
      **(long **)(lVar3 + 8) = lVar2;
      while (plVar5 != plVar1) {
        plVar5 = (long *)plVar5[1];
        FUN_00187e4c();
      }
    }
    FUN_00285dc0(plVar1);
    param_1[0x25] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x26];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_00285dc0(puVar4);
    param_1[0x26] = 0;
  }
  plVar1 = (long *)param_1[0x20];
  if (plVar1 != (long *)0x0) {
    if (plVar1[2] != 0) {
      lVar3 = *plVar1;
      plVar5 = (long *)plVar1[1];
      plVar1[2] = 0;
      lVar2 = *plVar5;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar3 + 8);
      **(long **)(lVar3 + 8) = lVar2;
      while (plVar5 != plVar1) {
        plVar6 = (long *)plVar5[1];
        (**(code **)plVar5[2])();
        FUN_00187e4c(plVar5);
        plVar5 = plVar6;
      }
    }
    FUN_00285dc0(plVar1);
    param_1[0x20] = 0;
  }
  FUN_00309fe8(param_1 + 0x5c);
  FUN_001fbac0(param_1 + 0x40);
  FUN_001fbac0(param_1 + 0x28);
  return;
}

