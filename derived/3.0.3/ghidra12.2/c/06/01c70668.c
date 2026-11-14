
undefined8 FUN_01c70668(void *param_1,int param_2,void *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  if (param_2 == 0) {
    if (param_4 == 0xd4) {
      memcpy(param_1,param_3,0xd4);
      return 1;
    }
  }
  else if (param_4 == 0xd0) {
    uVar1 = *(undefined8 *)((long)param_3 + 0x68);
    uVar6 = *(undefined8 *)((long)param_3 + 0x70);
    uVar11 = *(undefined8 *)((long)param_3 + 0x78);
    uVar21 = *(undefined4 *)((long)param_3 + 200);
    uVar22 = *(undefined4 *)((long)param_3 + 0xcc);
    uVar2 = *(undefined8 *)((long)param_3 + 0x28);
    uVar7 = *(undefined8 *)((long)param_3 + 0x30);
    uVar17 = *(undefined8 *)((long)param_3 + 0x80);
    uVar12 = *(undefined8 *)((long)param_3 + 0x88);
    uVar18 = *(undefined8 *)((long)param_3 + 0x90);
    uVar13 = *(undefined8 *)((long)param_3 + 0x98);
    uVar3 = *(undefined8 *)((long)param_3 + 0x38);
    uVar8 = *(undefined8 *)((long)param_3 + 0x40);
    uVar19 = *(undefined8 *)((long)param_3 + 0xa0);
    uVar14 = *(undefined8 *)((long)param_3 + 0xa8);
    uVar4 = *(undefined8 *)((long)param_3 + 0x48);
    uVar9 = *(undefined8 *)((long)param_3 + 0x50);
    uVar5 = *(undefined8 *)((long)param_3 + 0x58);
    uVar10 = *(undefined8 *)((long)param_3 + 0x60);
    uVar20 = *(undefined8 *)((long)param_3 + 0xb0);
    uVar15 = *(undefined8 *)((long)param_3 + 0xb8);
    uVar16 = *(undefined8 *)((long)param_3 + 0xc0);
    memmove(param_1,param_3,0x28);
    *(undefined4 *)((long)param_1 + 200) = uVar21;
    *(undefined8 *)((long)param_1 + 0x28) = uVar2;
    *(undefined8 *)((long)param_1 + 0x30) = uVar7;
    *(undefined4 *)((long)param_1 + 0xcc) = uVar22;
    *(undefined4 *)((long)param_1 + 0xd0) = 0;
    *(undefined8 *)((long)param_1 + 0x38) = uVar3;
    *(undefined8 *)((long)param_1 + 0x40) = uVar8;
    *(undefined8 *)((long)param_1 + 0x68) = uVar1;
    *(undefined8 *)((long)param_1 + 0x70) = uVar6;
    *(undefined8 *)((long)param_1 + 0x48) = uVar4;
    *(undefined8 *)((long)param_1 + 0x50) = uVar9;
    *(undefined8 *)((long)param_1 + 0x58) = uVar5;
    *(undefined8 *)((long)param_1 + 0x60) = uVar10;
    *(undefined8 *)((long)param_1 + 0x78) = uVar11;
    *(undefined8 *)((long)param_1 + 0x80) = uVar17;
    *(undefined8 *)((long)param_1 + 0x88) = uVar12;
    *(undefined8 *)((long)param_1 + 0x90) = uVar18;
    *(undefined8 *)((long)param_1 + 0x98) = uVar13;
    *(undefined8 *)((long)param_1 + 0xa0) = uVar19;
    *(undefined8 *)((long)param_1 + 0xa8) = uVar14;
    *(undefined8 *)((long)param_1 + 0xb0) = uVar20;
    *(undefined8 *)((long)param_1 + 0xb8) = uVar15;
    *(undefined8 *)((long)param_1 + 0xc0) = uVar16;
    return 1;
  }
  return 0;
}

