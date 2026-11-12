
void FUN_00706b78(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 auStack_70 [12];
  int local_64;
  undefined1 auStack_60 [8];
  int local_58;
  
  if (*(int *)(param_1 + 0x2b8) == 0) {
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x278);
    uVar2 = *(undefined8 *)(param_1 + 0x27c);
    *(undefined8 *)(param_2 + 0x9c) = *(undefined8 *)(param_1 + 0x284);
    *(undefined8 *)(param_2 + 0x94) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x28c);
    *(undefined8 *)(param_2 + 0xac) = *(undefined8 *)(param_1 + 0x294);
    *(undefined8 *)(param_2 + 0xa4) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x29c);
    *(undefined8 *)(param_2 + 0xbc) = *(undefined8 *)(param_1 + 0x2a4);
    *(undefined8 *)(param_2 + 0xb4) = uVar2;
    *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_1 + 0x2ac);
    *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_1 + 0x2b0);
    *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)(param_1 + 0x2b4);
    *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_1 + 0x2b8);
    *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_1 + 700);
    *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_1 + 0x2c0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    FUN_01473944(auStack_60,uVar2);
    fVar3 = (float)FUN_01472900(uVar2);
    FUN_01473944(auStack_70,uVar2);
    *(float *)(param_1 + 0x2ac) = (float)local_58 * 0.5;
    *(long *)(param_1 + 0x2c0) = param_1 + 0x2c8;
    *(float *)(param_1 + 0x2b0) = fVar3 / 10.0;
    *(float *)(param_1 + 0x2b4) = (float)local_64 * 0.5;
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x278);
    uVar2 = *(undefined8 *)(param_1 + 0x27c);
    *(undefined8 *)(param_2 + 0x9c) = *(undefined8 *)(param_1 + 0x284);
    *(undefined8 *)(param_2 + 0x94) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x28c);
    *(undefined8 *)(param_2 + 0xac) = *(undefined8 *)(param_1 + 0x294);
    *(undefined8 *)(param_2 + 0xa4) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x29c);
    *(undefined8 *)(param_2 + 0xbc) = *(undefined8 *)(param_1 + 0x2a4);
    *(undefined8 *)(param_2 + 0xb4) = uVar2;
    *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_1 + 0x2ac);
    *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_1 + 0x2b0);
    *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)(param_1 + 0x2b4);
    *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_1 + 0x2b8);
    *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_1 + 700);
    *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_1 + 0x2c0);
    uVar1 = *(int *)(param_1 + 0x2b8) - 1;
    if (uVar1 < 3) {
      *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(&DAT_04130af0 + (long)(int)uVar1 * 4);
    }
    else {
      *(undefined4 *)(param_1 + 0x2b8) = 0;
    }
  }
  return;
}

