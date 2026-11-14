
void FUN_0181603c(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  float *pfVar5;
  char *pcVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float local_5c [3];
  int local_18;
  int local_14;
  
  lVar8 = *(long *)(param_1 + 0x460);
  bVar3 = (param_3 & 1) == 0;
  lVar10 = 0x90;
  if (bVar3) {
    lVar10 = 0xc0;
  }
  lVar1 = lVar8 + 0x90;
  if (bVar3) {
    lVar1 = lVar8 + 0xc0;
  }
  puVar4 = (undefined4 *)(**(code **)(*(long *)(lVar8 + lVar10) + 0xf0))(lVar1);
  uVar12 = *puVar4;
  pfVar5 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x460) + 0x1b0) + 0xf0))
                              (*(long *)(param_1 + 0x460) + 0x1b0);
  fVar11 = *pfVar5;
  *(undefined4 *)(param_1 + 0x308) = uVar12;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  *(undefined1 *)(param_1 + 0x431) = 1;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(short *)(param_1 + 0x40a) = (short)(int)fVar11;
  if (((*(char *)(param_1 + 0x432) == '\0') && (*(char *)(param_1 + 0x433) == '\0')) &&
     ((param_2 & 1) == 0)) {
    lVar10 = *(long *)(param_1 + 0x3d8);
    iVar7 = 0;
    if ((lVar10 != 0) && (*(long *)(param_1 + 0x460) != 0)) {
      fVar11 = SQRT(*(float *)(lVar10 + 0x2c8));
      if (NAN(fVar11)) {
        fVar11 = sqrtf(*(float *)(lVar10 + 0x2c8));
      }
      if (fVar11 <= *(float *)(lVar10 + 0x298)) {
        lVar10 = *(long *)(param_1 + 0x460);
        if (*(float *)(*(long *)(param_1 + 0x3d8) + 0x2cc) <= *(float *)(param_1 + 0x334)) {
          iVar7 = 0;
          if (lVar10 != 0) {
            pfVar5 = (float *)(**(code **)(*(long *)(lVar10 + 0x180) + 0xf0))(lVar10 + 0x180);
            iVar7 = (int)(long)(*pfVar5 * 11930465.0);
          }
        }
        else {
          iVar7 = 0;
          if (lVar10 != 0) {
            pfVar5 = (float *)(**(code **)(*(long *)(lVar10 + 0x180) + 0xf0))(lVar10 + 0x180);
            iVar7 = (int)(long)(*pfVar5 * 11930465.0);
          }
          iVar7 = -iVar7;
        }
      }
      else {
        iVar7 = 0;
      }
    }
  }
  else {
    iVar7 = *(int *)(*(long *)(param_1 + 0x300) + 0x2b4);
  }
  *(int *)(param_1 + 800) = iVar7;
  if ((*(long *)(param_1 + 0x3d0) != 0) &&
     (lVar10 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x90), lVar10 != 0)) {
    *(uint *)(lVar10 + 0x178) = *(uint *)(lVar10 + 0x178) & 0xfffffffe;
  }
  if (*(long *)(param_1 + 0x3d8) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x3d8) + 0x294) = 0;
  }
  if ((param_3 & 1) != 0) {
    return;
  }
  uVar9 = (ulong)(*(uint *)(param_1 + 800) >> 0x14) & 0xff0;
  fVar11 = (float)(*(uint *)(param_1 + 800) & 0xffffff) * 5.9604645e-08;
  lVar10 = *(long *)(param_1 + 0x300);
  fVar13 = (*(float *)((long)&DAT_04199798 + uVar9) +
           fVar11 * *(float *)((long)&DAT_0419979c + uVar9)) * 5.0 + *(float *)(lVar10 + 0x278);
  fVar14 = (*(float *)((long)&DAT_041997a0 + uVar9) +
           fVar11 * *(float *)((long)&DAT_041997a4 + uVar9)) * 5.0 + *(float *)(lVar10 + 0x280);
  fVar11 = (float)FUN_015cb8d4(lVar10 + 0x278,1);
  local_5c[0] = (float)((uint)local_5c[0] & 0xffffff00);
  local_5c[1] = 0.0;
  iVar7 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  iVar2 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  uVar9 = FUN_01a1a2a0(fVar11,iVar7,iVar2,local_5c);
  if ((uVar9 & 1) != 0) {
    local_18 = 0;
    local_5c[0] = (float)iVar7 * 5.0 + 2.5;
    local_5c[2] = (float)iVar2 * 5.0 + 2.5;
    lVar10 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar10 == 0) || (*(long *)(lVar10 + 0xa8) == 0)) || (*(char *)(lVar10 + 0x11c8) != '\0'))
    {
      fVar13 = -500.0;
    }
    else {
      fVar13 = (float)FUN_0093a950(lVar10 + 0x28,local_5c,&local_18);
    }
    if ((fVar13 < fVar11 + 10.0) && (fVar11 < fVar13 + 3.0)) {
      local_14 = local_18;
      lVar10 = FUN_009807cc(DAT_04cfab78 + 8,local_18);
      if (((lVar10 == 0) ||
          ((pcVar6 = (char *)FUN_009823a0(lVar10,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
           pcVar6 == (char *)0x0 || (*pcVar6 == '\0')))) && (uVar12 = 0, local_18 != 0x1d))
      goto LAB_018162f0;
    }
  }
  puVar4 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x460) + 0xf0) + 0xf0))();
  uVar12 = *puVar4;
LAB_018162f0:
  *(undefined4 *)(param_1 + 0x318) = uVar12;
  return;
}

