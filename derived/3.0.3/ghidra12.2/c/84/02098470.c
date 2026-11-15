
void FUN_02098470(float *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  
  lVar4 = FUN_0265c2a0(DAT_05407608);
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar5)();
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN_020fd7d8(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8));
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  if (((DAT_053dc020 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_053dc020), iVar3 != 0)) {
    DAT_053dbfa0 = PTR_DAT_04bb2010 + 0x10;
    DAT_053dbfa8 = 0x500000009;
    DAT_053dc008 = 0x500000009;
    DAT_053dbfb8 = 0x300000007;
    DAT_053dbfc8 = 0x500000003;
    DAT_053dbfd8 = 0x300000003;
    DAT_053dbfe8 = 0x300000007;
    DAT_053dbff8 = 0x300000003;
    DAT_053dc018 = 0x300000009;
    DAT_053dbfb0 = DAT_053dbfa0;
    DAT_053dbfc0 = DAT_053dbfa0;
    DAT_053dbfd0 = DAT_053dbfa0;
    DAT_053dbfe0 = DAT_053dbfa0;
    DAT_053dbff0 = DAT_053dbfa0;
    DAT_053dc000 = DAT_053dbfa0;
    DAT_053dc010 = DAT_053dbfa0;
    __cxa_guard_release(&DAT_053dc020);
  }
  if (((DAT_053dc0a8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_053dc0a8), iVar3 != 0)) {
    DAT_053dc028 = PTR_DAT_04bb2010 + 0x10;
    DAT_053dc030 = 0x900000003;
    DAT_053dc040 = 0x700000003;
    DAT_053dc050 = 0x900000009;
    DAT_053dc060 = 0x700000009;
    DAT_053dc070 = 0x900000003;
    DAT_053dc080 = 0x900000009;
    DAT_053dc090 = 0x700000003;
    DAT_053dc0a0 = 0x900000003;
    DAT_053dc038 = DAT_053dc028;
    DAT_053dc048 = DAT_053dc028;
    DAT_053dc058 = DAT_053dc028;
    DAT_053dc068 = DAT_053dc028;
    DAT_053dc078 = DAT_053dc028;
    DAT_053dc088 = DAT_053dc028;
    DAT_053dc098 = DAT_053dc028;
    __cxa_guard_release(&DAT_053dc0a8);
  }
  param_1[1] = 0.0;
  if (param_2 == 2) {
    *param_1 = 45.0;
    fVar6 = 55.0;
  }
  else {
    if (param_2 == 1) {
      puVar5 = &DAT_053dc028;
    }
    else {
      if (param_2 != 0) {
        return;
      }
      puVar5 = &DAT_053dbfa0;
    }
    *param_1 = (float)*(int *)(puVar5 + (long)(int)(uVar2 & 0xff) * 2 + 1) * 5.0;
    fVar6 = (float)*(int *)((long)puVar5 + (long)(int)(uVar2 & 0xff) * 0x10 + 0xc) * 5.0;
  }
  param_1[2] = fVar6;
  return;
}

