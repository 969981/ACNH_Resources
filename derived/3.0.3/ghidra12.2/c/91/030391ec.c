
void FUN_030391ec(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_60;
  float fStack_5c;
  undefined4 local_58;
  undefined *local_50;
  undefined4 local_48;
  
  uVar8 = (uint)*(ushort *)(param_1 + 0x140);
  if (*(char *)(param_1 + 0x138) != '\0') {
    uVar8 = uVar8 | 1;
    *(short *)(param_1 + 0x140) = (short)uVar8;
  }
  puVar1 = PTR_DAT_04bc0cb8;
  if ((uVar8 & 1) != 0) {
    lVar6 = param_1 + (ulong)*(uint *)(param_1 + 300) * 0x20;
    if (1 < *(uint *)(param_1 + 300)) {
      lVar6 = param_1;
    }
    plVar11 = *(long **)(lVar6 + 0x10);
    local_50 = PTR_DAT_04bc0cb8 + 0x10;
    local_48 = 8;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_50);
    lVar6 = (**(code **)(plVar11[3] + 0xa0))(plVar11[1]);
    fVar13 = *(float *)(param_1 + 0x48) - *(float *)(lVar6 + 4);
    fVar17 = -fVar13;
    if (0.0 <= fVar13) {
      fVar17 = fVar13;
    }
    if (*(int *)(param_1 + 0x50) == 1) {
      fVar15 = fVar17 * *(float *)(param_1 + 0x54);
      fVar16 = *(float *)(param_1 + 0x5c);
      if (fVar15 <= *(float *)(param_1 + 0x5c)) {
        fVar16 = fVar15;
      }
      fVar14 = *(float *)(param_1 + 0x58);
      if (*(float *)(param_1 + 0x58) <= fVar15) {
        fVar14 = fVar16;
      }
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar14 = fVar14 + *(float *)(param_1 + 0x60);
      }
    }
    else {
      fVar14 = 0.0;
      if (*(int *)(param_1 + 0x50) == 0) {
        fVar14 = fVar17 / (float)*(int *)(param_1 + 100);
      }
    }
    plVar11 = *(long **)(param_1 + 0x10);
    puVar1 = puVar1 + 0x10;
    local_48 = 8;
    if (fVar14 <= fVar17) {
      fVar17 = fVar14;
    }
    fVar16 = -fVar17;
    if (0.0 <= fVar13) {
      fVar16 = fVar17;
    }
    local_50 = puVar1;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_50);
    puVar7 = (undefined8 *)(**(code **)(plVar11[3] + 0xa0))(plVar11[1]);
    local_58 = *(undefined4 *)(puVar7 + 1);
    local_48 = 8;
    plVar11 = *(long **)(param_1 + 0x10);
    fStack_5c = (float)((ulong)*puVar7 >> 0x20);
    local_60 = (undefined4)*puVar7;
    _local_60 = CONCAT44(fVar16 + fStack_5c,local_60);
    local_50 = puVar1;
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_50);
    (**(code **)(plVar11[3] + 0x98))(plVar11[1],&local_60);
    plVar11 = *(long **)(param_1 + 0x30);
    local_48 = 8;
    local_50 = puVar1;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_50);
    puVar7 = (undefined8 *)(**(code **)(plVar11[3] + 0xa0))(plVar11[1]);
    local_58 = *(undefined4 *)(puVar7 + 1);
    local_48 = 8;
    plVar11 = *(long **)(param_1 + 0x30);
    fStack_5c = (float)((ulong)*puVar7 >> 0x20);
    local_60 = (undefined4)*puVar7;
    _local_60 = CONCAT44(fVar16 + fStack_5c,local_60);
    local_50 = puVar1;
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_50);
    (**(code **)(plVar11[3] + 0x98))(plVar11[1],&local_60);
    local_48 = 8;
    fVar17 = *(float *)(param_1 + 0x48);
    lVar6 = param_1 + (ulong)*(uint *)(param_1 + 300) * 0x20;
    if (1 < *(uint *)(param_1 + 300)) {
      lVar6 = param_1;
    }
    plVar11 = *(long **)(lVar6 + 0x10);
    local_50 = puVar1;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_50);
    lVar6 = (**(code **)(plVar11[3] + 0xa0))(plVar11[1]);
    fVar17 = fVar17 - *(float *)(lVar6 + 4);
    uVar8 = (uint)*(ushort *)(param_1 + 0x140);
    if ((-0.01 <= fVar17) && (fVar17 <= 0.01)) {
      iVar4 = *(int *)(param_1 + 0x128);
      iVar10 = *(int *)(param_1 + 0x6c);
      *(ushort *)(param_1 + 0x140) = *(ushort *)(param_1 + 0x140) & 0xfffe;
      FUN_03037ed0(param_1);
      if (1 < iVar10) {
        uVar5 = *(uint *)(param_1 + 300);
        uVar9 = (ulong)uVar5;
        uVar8 = uVar5 + 1 & 1;
        uVar2 = -uVar8;
        if (-2 < (int)uVar5) {
          uVar2 = uVar8;
        }
        uVar8 = uVar5 + 3 & 1;
        uVar3 = -uVar8;
        if (-1 < (int)(uVar5 + 3)) {
          uVar3 = uVar8;
        }
        if (iVar4 == 0) {
          lVar6 = param_1 + uVar9 * 0x20;
          if (1 < uVar5) {
            lVar6 = param_1;
          }
          lVar12 = param_1 + (ulong)uVar3 * 0x20;
          if (1 < uVar3) {
            lVar12 = param_1;
          }
        }
        else if (iVar10 + -1 == iVar4) {
          lVar6 = param_1 + (ulong)uVar2 * 0x20;
          if (1 < uVar2) {
            lVar6 = param_1;
          }
          lVar12 = param_1 + uVar9 * 0x20;
          if (1 < uVar5) {
            lVar12 = param_1;
          }
        }
        else {
          lVar12 = param_1 + uVar9 * 0x20;
          if (1 < uVar5) {
            lVar12 = param_1;
          }
          lVar6 = param_1 + (ulong)uVar3 * 0x20;
          if (1 < uVar3) {
            lVar6 = param_1;
          }
          FUN_03038060(lVar12,lVar6);
          lVar6 = param_1 + (ulong)uVar2 * 0x20;
          if (1 < uVar2) {
            lVar6 = param_1;
          }
        }
        FUN_03038060(lVar6,lVar12);
      }
      (*(code *)**(undefined8 **)(param_1 + 0xa0))
                ((undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x128),
                 *(undefined4 *)(param_1 + 0x6c));
      uVar8 = (uint)*(ushort *)(param_1 + 0x140);
    }
  }
  if ((uVar8 >> 1 & 1) != 0) {
    iVar10 = 0xff;
    iVar4 = *(int *)(param_1 + 0xc0);
    if (*(int *)(param_1 + 0x144) < iVar4) {
      iVar10 = 0;
      if (iVar4 != 0) {
        iVar10 = 0xff / iVar4;
      }
      iVar10 = iVar10 * *(int *)(param_1 + 0x144);
    }
    plVar11 = *(long **)(param_1 + 0x10);
    if (plVar11 != (long *)0x0) {
      local_48 = 0x14;
      local_50 = PTR_DAT_04bc0cb8 + 0x10;
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_50);
      (**(code **)(plVar11[3] + 0x158))(plVar11[1],iVar10);
    }
    plVar11 = *(long **)(param_1 + 0x30);
    if (plVar11 != (long *)0x0) {
      local_48 = 0x14;
      local_50 = PTR_DAT_04bc0cb8 + 0x10;
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_50);
      (**(code **)(plVar11[3] + 0x158))(plVar11[1],iVar10);
    }
    if (*(int *)(param_1 + 0xc0) <= *(int *)(param_1 + 0x144)) {
      *(ushort *)(param_1 + 0x140) = *(ushort *)(param_1 + 0x140) & 0xfffd;
    }
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
  }
  *(undefined1 *)(param_1 + 0x138) = 0;
  return;
}

