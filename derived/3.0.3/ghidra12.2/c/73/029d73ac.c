
void FUN_029d73ac(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined4 uVar10;
  char cVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  char cVar17;
  char cVar18;
  undefined1 uVar19;
  undefined4 uVar20;
  undefined1 uVar21;
  ulong uVar22;
  char cVar23;
  float fVar24;
  float fVar25;
  undefined4 local_e8;
  int local_e4;
  int local_94;
  int local_8c;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined1 local_78;
  uint local_74;
  int iStack_70;
  undefined4 local_6c;
  
  local_80 = *param_2;
  local_74 = *(uint *)(param_2 + 1);
  iVar2 = *(int *)((long)param_2 + 0xc);
  iVar3 = *(int *)(param_2 + 4);
  local_78 = 0;
  local_6c = *(undefined4 *)(param_2 + 2);
  iStack_70 = iVar2;
  FUN_029dacc0(param_1 + 8,&local_80);
  local_80 = param_2[3];
  uVar9 = 0xffffffff;
  if (*(int *)(param_1 + 0x58) < 1 && 0 < iVar2) {
    uVar9 = -*(int *)(param_1 + 0x58);
  }
  local_78 = 1;
  iStack_70 = *(int *)(param_2 + 4);
  local_6c = *(undefined4 *)((long)param_2 + 0x24);
  local_74 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
  FUN_029dacc0(param_1 + 0x3f8,&local_80);
  if ((int)uVar9 < 0) {
    uVar9 = *(uint *)(param_1 + 0x14);
    local_8c = *(int *)(param_1 + 0x2c);
    local_84 = *(int *)(param_1 + 0x68);
    fVar24 = *(float *)(param_1 + 0x74);
    local_e4 = *(int *)(param_1 + 0x3c);
    local_88 = *(int *)(param_1 + 0x6c);
    uVar22 = *(ulong *)(param_1 + 0x80);
    local_e8 = *(undefined4 *)(param_1 + 0x88);
    local_94 = *(int *)(param_1 + 0x70);
    cVar6 = *(char *)(param_1 + 0x8d);
    uVar16 = *(undefined1 *)(param_1 + 0x8e);
    uVar13 = *(undefined1 *)(param_1 + 0x9a);
    cVar17 = *(char *)(param_1 + 0xa1);
    uVar10 = *(undefined4 *)(param_1 + 0x94);
    cVar18 = *(char *)(param_1 + 0xa9);
    uVar15 = *(undefined1 *)(param_1 + 0xaa);
    cVar11 = *(char *)(param_1 + 0x99);
    cVar7 = *(char *)(param_1 + 0xb1);
    uVar21 = *(undefined1 *)(param_1 + 0xba);
    uVar19 = *(undefined1 *)(param_1 + 0xbb);
    uVar20 = *(undefined4 *)(param_1 + 0xbc);
    uVar8 = *(undefined1 *)(param_1 + 0xa2);
    uVar14 = *(undefined1 *)(param_1 + 0xb2);
    cVar23 = *(char *)(param_1 + 0xb9);
    if (0 < iVar2) {
      if (iVar3 < 1) {
        if (*(char *)(param_2 + 5) != '\0') {
          uVar9 = 0x10;
        }
      }
      else {
        uVar12 = *(uint *)(param_1 + 0x400);
        if (1 < uVar9) {
          uVar12 = uVar9;
        }
        iVar2 = *(int *)(param_1 + 0x54);
        iVar3 = *(int *)(param_1 + 0x58);
        if (local_8c < 0) {
          fVar25 = ((float)iVar3 / (float)iVar2) * 30.0 + -0.5;
          uVar9 = 0;
          if (fVar25 != (float)(int)fVar25) {
            uVar9 = (uint)(0.0 <= fVar25);
          }
          local_8c = uVar9 + (int)fVar25;
        }
        if (local_e4 < 0) {
          fVar25 = ((float)iVar3 / (float)iVar2) * 30.0 + -0.5;
          uVar9 = 0;
          if (fVar25 != (float)(int)fVar25) {
            uVar9 = (uint)(0.0 <= fVar25);
          }
          local_e4 = uVar9 + (int)fVar25;
        }
        uVar9 = uVar12;
        if ((local_88 < 0) && (-1 < *(int *)(param_1 + 0x46c))) {
          local_88 = 0;
          fVar24 = (float)(*(int *)(param_1 + 0x46c) + iVar3) / (float)iVar2;
          fVar25 = fVar24 * 30.0 + -0.5;
          fVar24 = *(float *)(param_1 + 0x78) / (fVar24 + *(float *)(param_1 + 0x78));
          uVar12 = 0;
          if (fVar25 != (float)(int)fVar25) {
            uVar12 = (uint)(0.0 <= fVar25);
          }
          local_94 = uVar12 + (int)fVar25;
        }
      }
      iVar2 = *(int *)(param_1 + 0x838);
      if (-1 < local_84) {
        iVar2 = local_84;
      }
      if ((uVar22 & 0xff00) == 0) {
        local_e8 = *(undefined4 *)(param_1 + 0x850);
        uVar22 = uVar22 & 0xffffffffff0000ff | (ulong)*(byte *)(param_1 + 0x849) << 8 |
                 (ulong)*(byte *)(param_1 + 0x84a) << 0x10;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x85c);
      uVar4 = *(undefined1 *)(param_1 + 0x856);
      cVar5 = *(char *)(param_1 + 0x855);
      if (cVar6 != '\0') {
        uVar1 = uVar10;
        uVar4 = uVar16;
        cVar5 = cVar6;
      }
      cVar6 = cVar5;
      uVar16 = uVar4;
      uVar4 = *(undefined1 *)(param_1 + 0x862);
      cVar5 = *(char *)(param_1 + 0x861);
      if (cVar11 != '\0') {
        uVar4 = uVar13;
        cVar5 = cVar11;
      }
      cVar11 = cVar5;
      uVar13 = uVar4;
      cVar5 = *(char *)(param_1 + 0x869);
      uVar4 = *(undefined1 *)(param_1 + 0x86a);
      if (cVar17 != '\0') {
        cVar5 = cVar17;
        uVar4 = uVar8;
      }
      uVar8 = uVar4;
      cVar17 = cVar5;
      cVar5 = *(char *)(param_1 + 0x871);
      uVar4 = *(undefined1 *)(param_1 + 0x872);
      if (cVar18 != '\0') {
        cVar5 = cVar18;
        uVar4 = uVar15;
      }
      uVar15 = uVar4;
      cVar18 = cVar5;
      uVar4 = *(undefined1 *)(param_1 + 0x87a);
      cVar5 = *(char *)(param_1 + 0x879);
      if (cVar7 != '\0') {
        uVar4 = uVar14;
        cVar5 = cVar7;
      }
      cVar7 = cVar5;
      uVar14 = uVar4;
      cVar5 = *(char *)(param_1 + 0x881);
      uVar4 = *(undefined1 *)(param_1 + 0x882);
      if (cVar23 != '\0') {
        cVar5 = cVar23;
        uVar4 = uVar21;
      }
      uVar21 = uVar4;
      cVar23 = cVar5;
      uVar10 = uVar1;
      local_84 = iVar2;
    }
    *(uint *)(param_1 + 0x7f4) = uVar9;
    *(undefined4 *)(param_1 + 0x814) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x834) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x7fc) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(param_1 + 8);
    *(float *)(param_1 + 0x844) = fVar24;
    *(ulong *)(param_1 + 0x848) = uVar22;
    *(undefined4 *)(param_1 + 0x850) = local_e8;
    *(char *)(param_1 + 0x855) = cVar6;
    *(undefined1 *)(param_1 + 0x856) = uVar16;
    *(undefined4 *)(param_1 + 0x85c) = uVar10;
    *(char *)(param_1 + 0x861) = cVar11;
    *(undefined1 *)(param_1 + 0x862) = uVar13;
    *(char *)(param_1 + 0x869) = cVar17;
    *(undefined1 *)(param_1 + 0x86a) = uVar8;
    *(undefined1 *)(param_1 + 0x7ec) = *(undefined1 *)(param_1 + 0xc);
    *(char *)(param_1 + 0x871) = cVar18;
    *(undefined1 *)(param_1 + 0x872) = uVar15;
    *(undefined1 *)(param_1 + 0x873) = *(undefined1 *)(param_1 + 0xab);
    *(undefined4 *)(param_1 + 0x874) = *(undefined4 *)(param_1 + 0xac);
    *(undefined1 *)(param_1 + 0x878) = *(undefined1 *)(param_1 + 0xb0);
    *(char *)(param_1 + 0x879) = cVar7;
    *(undefined1 *)(param_1 + 0x87a) = uVar14;
    *(char *)(param_1 + 0x881) = cVar23;
    *(undefined1 *)(param_1 + 0x882) = uVar21;
    *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(param_1 + 0x18);
    *(int *)(param_1 + 0x80c) = local_8c;
    *(int *)(param_1 + 0x81c) = local_e4;
    *(int *)(param_1 + 0x838) = local_84;
    *(int *)(param_1 + 0x83c) = local_88;
    *(int *)(param_1 + 0x840) = local_94;
    *(undefined8 *)(param_1 + 0x800) = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x854) = *(undefined1 *)(param_1 + 0x8c);
    *(undefined1 *)(param_1 + 0x857) = *(undefined1 *)(param_1 + 0x8f);
    *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_1 + 0x90);
    *(undefined1 *)(param_1 + 0x860) = *(undefined1 *)(param_1 + 0x98);
    *(undefined1 *)(param_1 + 0x863) = *(undefined1 *)(param_1 + 0x9b);
    *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined1 *)(param_1 + 0x868) = *(undefined1 *)(param_1 + 0xa0);
    *(undefined1 *)(param_1 + 0x86b) = *(undefined1 *)(param_1 + 0xa3);
    *(undefined4 *)(param_1 + 0x86c) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0x870) = *(undefined1 *)(param_1 + 0xa8);
    *(undefined1 *)(param_1 + 0x87b) = *(undefined1 *)(param_1 + 0xb3);
    *(undefined4 *)(param_1 + 0x87c) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined1 *)(param_1 + 0x880) = *(undefined1 *)(param_1 + 0xb8);
  }
  else {
    *(undefined8 *)(param_1 + 0x808) = *(undefined8 *)(param_1 + 0x418);
    *(undefined4 *)(param_1 + 0x85c) = *(undefined4 *)(param_1 + 0x484);
    *(undefined8 *)(param_1 + 0x800) = *(undefined8 *)(param_1 + 0x410);
    *(undefined4 *)(param_1 + 0x85f) = *(undefined4 *)(param_1 + 0x487);
    *(undefined4 *)(param_1 + 0x7fc) = *(undefined4 *)(param_1 + 0x40c);
    *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(param_1 + 0x440);
    uVar9 = 0x10;
    if (1 < *(uint *)(param_1 + 0x404)) {
      uVar9 = *(uint *)(param_1 + 0x404);
    }
    *(uint *)(param_1 + 0x7f4) = uVar9;
    *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(param_1 + 0x420);
    *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(param_1 + 0x3f8);
    *(undefined1 *)(param_1 + 0x7ec) = *(undefined1 *)(param_1 + 0x3fc);
    *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(param_1 + 0x408);
    *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x430);
    iVar2 = *(int *)(param_1 + 0x838);
    if (-1 < *(int *)(param_1 + 0x458)) {
      iVar2 = *(int *)(param_1 + 0x458);
    }
    uVar19 = *(undefined1 *)(param_1 + 0x4ab);
    *(undefined8 *)(param_1 + 0x814) = *(undefined8 *)(param_1 + 0x424);
    *(int *)(param_1 + 0x838) = iVar2;
    *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(param_1 + 0x43c);
    uVar20 = *(undefined4 *)(param_1 + 0x4ac);
    *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(param_1 + 0x400);
    *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)(param_1 + 0x42c);
    *(undefined8 *)(param_1 + 0x848) = *(undefined8 *)(param_1 + 0x470);
    *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(param_1 + 0x438);
    *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_1 + 0x434);
    *(undefined8 *)(param_1 + 0x864) = *(undefined8 *)(param_1 + 0x48c);
    *(undefined8 *)(param_1 + 0x83c) = *(undefined8 *)(param_1 + 0x45c);
    *(undefined4 *)(param_1 + 0x834) = *(undefined4 *)(param_1 + 0x454);
    *(undefined2 *)(param_1 + 0x880) = *(undefined2 *)(param_1 + 0x4a8);
    *(undefined8 *)(param_1 + 0x850) = *(undefined8 *)(param_1 + 0x478);
    *(undefined4 *)(param_1 + 0x844) = *(undefined4 *)(param_1 + 0x464);
    *(undefined1 *)(param_1 + 0x863) = *(undefined1 *)(param_1 + 0x48b);
    *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_1 + 0x480);
    *(undefined8 *)(param_1 + 0x86c) = *(undefined8 *)(param_1 + 0x494);
    *(undefined8 *)(param_1 + 0x874) = *(undefined8 *)(param_1 + 0x49c);
    *(undefined4 *)(param_1 + 0x87c) = *(undefined4 *)(param_1 + 0x4a4);
    *(undefined1 *)(param_1 + 0x882) = *(undefined1 *)(param_1 + 0x4aa);
  }
  *(undefined1 *)(param_1 + 0x883) = uVar19;
  *(undefined4 *)(param_1 + 0x884) = uVar20;
  return;
}

