
void FUN_03294c5c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = (long)&PTR_LAB_04b182d0;
  if ((long *)param_1[0x14d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14d] + 8))();
  }
  if ((long *)param_1[0x147] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x147] + 8))();
  }
  if ((long *)param_1[0x13e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13e] + 8))();
  }
  if ((long *)param_1[0x138] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x138] + 8))();
  }
  if ((long *)param_1[0x132] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x132] + 8))();
  }
  if ((long *)param_1[300] != (long *)0x0) {
    (**(code **)(*(long *)param_1[300] + 8))();
  }
  if ((long *)param_1[0x126] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x126] + 8))();
  }
  if ((long *)param_1[0x124] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x124] + 8))();
  }
  FUN_03281ac0(param_1 + 0x123);
  param_1[0x122] = 0;
  FUN_032c1b04(param_1 + 0xde);
  FUN_032c1b04(param_1 + 0x9a);
  FUN_032ae0c8(param_1 + 0x60);
  plVar4 = param_1 + 0x55;
  FUN_032c6840(plVar4);
  plVar3 = (long *)param_1[0x55];
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  if (plVar3 != (long *)0x0) {
    lVar1 = param_1[0x57];
    lVar2 = param_1[0x56];
    param_1[0x57] = 0;
    *plVar4 = 0;
    param_1[0x56] = 0;
    if ((long *)*plVar3 == plVar4) {
      *plVar3 = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 8) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar1;
    }
  }
  plVar3 = param_1 + 0x4a;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *plVar4 = 0;
  FUN_032c6840(plVar3);
  plVar4 = (long *)param_1[0x4a];
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  if (plVar4 != (long *)0x0) {
    lVar1 = param_1[0x4c];
    lVar2 = param_1[0x4b];
    param_1[0x4c] = 0;
    *plVar3 = 0;
    param_1[0x4b] = 0;
    if ((long *)*plVar4 == plVar3) {
      *plVar4 = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 8) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar1;
    }
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *plVar3 = 0;
  if ((long *)param_1[0x49] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x49] + 8))();
  }
  param_1[0x48] = 0;
  if ((long *)param_1[0x47] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x47] + 8))();
  }
  if ((long *)param_1[0x46] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x46] + 8))();
  }
  if ((long *)param_1[0x3d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3d] + 8))();
  }
  if ((long *)param_1[0x37] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x37] + 8))();
  }
  if ((long *)param_1[0x31] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x31] + 8))();
  }
  if ((long *)param_1[0x2b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2b] + 8))();
  }
  param_1[0x1a] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *param_1 = (long)(PTR_DAT_04bc9118 + 0x10);
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 8))();
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
  }
  *param_1 = (long)&PTR_FUN_04b17890;
  plVar4 = param_1 + 1;
  plVar3 = (long *)*plVar4;
  if (plVar3 != (long *)0x0) {
    lVar1 = param_1[2];
    lVar2 = param_1[3];
    param_1[3] = 0;
    *plVar4 = 0;
    param_1[2] = 0;
    if ((long *)*plVar3 == plVar4) {
      *plVar3 = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x10) = lVar2;
    }
    plVar3 = (long *)*plVar4;
    if (plVar3 != (long *)0x0) {
      lVar1 = param_1[2];
      lVar2 = param_1[3];
      param_1[3] = 0;
      *plVar4 = 0;
      param_1[2] = 0;
      if ((long *)*plVar3 == plVar4) {
        *plVar3 = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
      }
    }
  }
  *plVar4 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

