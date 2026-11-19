
void FUN_03c5a424(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  
  param_1[2] = param_2;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_04b81638;
  param_1[1] = 0;
  puVar7 = PTR_DAT_04bd3a00;
  if (((*PTR_DAT_04bd3a08 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bd3a08), iVar8 != 0))
  {
    *(undefined4 *)puVar7 = 0;
    puVar2 = PTR_LAB_04bd3968;
    puVar1 = PTR_LAB_04bd3960;
    *(undefined **)(puVar7 + 8) = PTR_LAB_04bd3960;
    *(undefined **)(puVar7 + 0x10) = puVar2;
    puVar2 = PTR_FUN_04bd3970;
    *(undefined **)(puVar7 + 0x18) = PTR_LAB_04bd3978;
    *(undefined **)(puVar7 + 0x20) = puVar2;
    puVar2 = PTR_LAB_04bd3980;
    *(undefined **)(puVar7 + 0x28) = PTR_LAB_04bd3988;
    *(undefined **)(puVar7 + 0x30) = puVar2;
    puVar3 = PTR_LAB_04bd3998;
    puVar2 = PTR_FUN_04bd3990;
    *(undefined **)(puVar7 + 0x38) = PTR_LAB_04bd3998;
    *(undefined **)(puVar7 + 0x40) = puVar2;
    *(undefined **)(puVar7 + 0x48) = puVar3;
    *(undefined **)(puVar7 + 0x50) = puVar2;
    *(undefined **)(puVar7 + 0x58) = puVar3;
    *(undefined **)(puVar7 + 0x60) = puVar2;
    *(undefined **)(puVar7 + 0x68) = puVar3;
    *(undefined **)(puVar7 + 0x70) = puVar2;
    puVar5 = PTR_LAB_04bd39a8;
    puVar4 = PTR_FUN_04bd39a0;
    *(undefined **)(puVar7 + 0x78) = puVar3;
    *(undefined **)(puVar7 + 0x80) = puVar2;
    *(undefined **)(puVar7 + 200) = puVar3;
    *(undefined **)(puVar7 + 0xd0) = puVar2;
    *(undefined **)(puVar7 + 0xd8) = puVar3;
    *(undefined **)(puVar7 + 0xe0) = puVar2;
    *(undefined **)(puVar7 + 0xe8) = puVar3;
    *(undefined **)(puVar7 + 0xf0) = puVar2;
    *(undefined **)(puVar7 + 0xf8) = puVar3;
    *(undefined **)(puVar7 + 0x100) = puVar2;
    *(undefined **)(puVar7 + 0x108) = puVar3;
    *(undefined **)(puVar7 + 0x110) = puVar2;
    *(undefined **)(puVar7 + 0x118) = puVar3;
    *(undefined **)(puVar7 + 0x120) = puVar2;
    *(undefined **)(puVar7 + 0x88) = puVar5;
    *(undefined **)(puVar7 + 0x90) = puVar4;
    *(undefined **)(puVar7 + 0x98) = puVar5;
    *(undefined **)(puVar7 + 0xa0) = puVar4;
    *(undefined **)(puVar7 + 0xa8) = puVar5;
    *(undefined **)(puVar7 + 0xb0) = puVar4;
    *(undefined **)(puVar7 + 0xb8) = puVar5;
    *(undefined **)(puVar7 + 0xc0) = puVar4;
    puVar6 = PTR_LAB_04bd39b8;
    *(undefined **)(puVar7 + 0x128) = puVar3;
    *(undefined **)(puVar7 + 0x130) = puVar2;
    puVar2 = PTR_FUN_04bd39b0;
    *(undefined **)(puVar7 + 0x148) = puVar5;
    *(undefined **)(puVar7 + 0x150) = puVar4;
    *(undefined **)(puVar7 + 0x158) = puVar5;
    *(undefined **)(puVar7 + 0x160) = puVar4;
    *(undefined **)(puVar7 + 0x138) = puVar6;
    *(undefined **)(puVar7 + 0x140) = puVar2;
    puVar3 = PTR_LAB_04bd39c8;
    *(undefined **)(puVar7 + 0x168) = puVar5;
    *(undefined **)(puVar7 + 0x170) = puVar4;
    puVar4 = PTR_LAB_04bd39d0;
    puVar2 = PTR_FUN_04bd39c0;
    *(undefined **)(puVar7 + 0x178) = puVar3;
    *(undefined **)(puVar7 + 0x180) = puVar2;
    puVar3 = PTR_LAB_04bd39e0;
    puVar2 = PTR_LAB_04bd39d8;
    *(undefined **)(puVar7 + 0x1a8) = puVar4;
    *(undefined **)(puVar7 + 0x1b0) = puVar1;
    *(undefined **)(puVar7 + 0x1b8) = puVar1;
    *(undefined **)(puVar7 + 0x1c0) = puVar1;
    *(undefined **)(puVar7 + 0x188) = puVar4;
    *(undefined **)(puVar7 + 400) = puVar2;
    *(undefined **)(puVar7 + 0x198) = puVar4;
    *(undefined **)(puVar7 + 0x1a0) = puVar3;
    puVar3 = PTR_LAB_04bd39f0;
    puVar2 = PTR_LAB_04bd39e8;
    *(undefined **)(puVar7 + 0x1c8) = puVar1;
    *(undefined **)(puVar7 + 0x1d0) = puVar1;
    *(undefined **)(puVar7 + 0x1d8) = puVar2;
    *(undefined **)(puVar7 + 0x1e0) = puVar3;
    __cxa_guard_release(PTR_DAT_04bd3a08);
  }
  if (param_1[3] != 0) {
    (**(code **)(param_1[3] + 8))(param_1[1]);
  }
  param_1[1] = 0;
  param_1[3] = puVar7;
  return;
}

