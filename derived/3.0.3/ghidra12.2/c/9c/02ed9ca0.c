
void FUN_02ed9ca0(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined *local_60;
  undefined4 local_58;
  
  puVar8 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x218) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar8 != (undefined8 *)0x0) &&
     (uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4e58), puVar4 = PTR_DAT_04bc0878,
     (uVar6 & 1) != 0)) {
    uVar3 = *(uint *)(puVar8 + 0x40);
    lVar7 = puVar8[0x41];
    lVar1 = 0xa0;
    if (uVar3 < 0x15) {
      lVar1 = 0;
    }
    plVar13 = *(long **)(lVar7 + lVar1);
    lVar1 = 0xa8;
    if (uVar3 < 0x16) {
      lVar1 = 0;
    }
    plVar12 = *(long **)(lVar7 + lVar1);
    lVar1 = 0xb0;
    if (uVar3 < 0x17) {
      lVar1 = 0;
    }
    lVar2 = 0xb8;
    if (uVar3 < 0x18) {
      lVar2 = 0;
    }
    plVar11 = *(long **)(lVar7 + lVar1);
    plVar9 = *(long **)(lVar7 + lVar2);
    if (plVar13 != (long *)0x0) {
      local_60 = PTR_DAT_04bc0878 + 0x10;
      local_58 = 0x15;
      (**(code **)(*plVar13 + 0x18))(plVar13,&local_60);
      (**(code **)(plVar13[3] + 0x640))(plVar13[1]);
    }
    if (plVar12 != (long *)0x0) {
      local_60 = puVar4 + 0x10;
      local_58 = 0x15;
      (**(code **)(*plVar12 + 0x18))(plVar12,&local_60);
      (**(code **)(plVar12[3] + 0x640))(plVar12[1]);
    }
    if (plVar11 != (long *)0x0) {
      local_60 = puVar4 + 0x10;
      local_58 = 0x15;
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_60);
      (**(code **)(plVar11[3] + 0x640))(plVar11[1]);
    }
    if (plVar9 != (long *)0x0) {
      local_60 = puVar4 + 0x10;
      local_58 = 0x15;
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_60);
      (**(code **)(plVar9[3] + 0x640))(plVar9[1]);
    }
    uVar3 = *(uint *)(puVar8 + 0x40);
    lVar7 = puVar8[0x41];
    lVar1 = 0xc0;
    if (uVar3 < 0x19) {
      lVar1 = 0;
    }
    plVar13 = *(long **)(lVar7 + lVar1);
    lVar1 = 200;
    if (uVar3 < 0x1a) {
      lVar1 = 0;
    }
    plVar12 = *(long **)(lVar7 + lVar1);
    lVar1 = 0xd0;
    if (uVar3 < 0x1b) {
      lVar1 = 0;
    }
    lVar2 = 0xd8;
    if (uVar3 < 0x1c) {
      lVar2 = 0;
    }
    plVar11 = *(long **)(lVar7 + lVar1);
    plVar9 = *(long **)(lVar7 + lVar2);
    if (plVar13 != (long *)0x0) {
      local_60 = puVar4 + 0x10;
      local_58 = 0;
      (**(code **)(*plVar13 + 0x18))(plVar13,&local_60);
      (**(code **)(plVar13[3] + 0x598))(plVar13[1]);
    }
    if (plVar12 != (long *)0x0) {
      local_60 = puVar4 + 0x10;
      local_58 = 0;
      (**(code **)(*plVar12 + 0x18))(plVar12,&local_60);
      (**(code **)(plVar12[3] + 0x598))(plVar12[1]);
    }
    if (plVar11 != (long *)0x0) {
      local_60 = puVar4 + 0x10;
      local_58 = 0;
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_60);
      (**(code **)(plVar11[3] + 0x598))(plVar11[1]);
    }
    if (plVar9 != (long *)0x0) {
      local_60 = puVar4 + 0x10;
      local_58 = 0;
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_60);
      (**(code **)(plVar9[3] + 0x598))(plVar9[1]);
    }
    uVar3 = *(uint *)(puVar8 + 0x40);
    lVar7 = puVar8[0x41];
    lVar1 = 0x68;
    if (uVar3 < 0xe) {
      lVar1 = 0;
    }
    plVar13 = *(long **)(lVar7 + lVar1);
    lVar1 = 0x90;
    if (uVar3 < 0x13) {
      lVar1 = 0;
    }
    plVar12 = *(long **)(lVar7 + lVar1);
    lVar1 = 0x78;
    if (uVar3 < 0x10) {
      lVar1 = 0;
    }
    plVar9 = *(long **)(lVar7 + lVar1);
    lVar1 = 0x98;
    if (uVar3 < 0x14) {
      lVar1 = 0;
    }
    plVar10 = *(long **)(lVar7 + (ulong)(0x10 < uVar3) * 0x80);
    plVar11 = *(long **)(lVar7 + lVar1);
    if (plVar13 != (long *)0x0) {
      local_60 = puVar4 + 0x10;
      local_58 = 0x15;
      (**(code **)(*plVar13 + 0x18))(plVar13,&local_60);
      (**(code **)(plVar13[3] + 0x640))(plVar13[1]);
    }
    if (plVar12 != (long *)0x0) {
      local_60 = puVar4 + 0x10;
      local_58 = 0x15;
      (**(code **)(*plVar12 + 0x18))(plVar12,&local_60);
      (**(code **)(plVar12[3] + 0x640))(plVar12[1]);
    }
    if (plVar9 != (long *)0x0) {
      local_60 = puVar4 + 0x10;
      local_58 = 0x15;
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_60);
      (**(code **)(plVar9[3] + 0x640))(plVar9[1]);
    }
    if (plVar10 != (long *)0x0) {
      local_60 = puVar4 + 0x10;
      local_58 = 0x15;
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_60);
      (**(code **)(plVar10[3] + 0x640))(plVar10[1]);
    }
    if (plVar11 != (long *)0x0) {
      local_60 = puVar4 + 0x10;
      local_58 = 0x15;
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_60);
      (**(code **)(plVar11[3] + 0x640))(plVar11[1]);
    }
  }
  return;
}

