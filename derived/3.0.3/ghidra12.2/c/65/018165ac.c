
void FUN_018165ac(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  short sVar5;
  float *pfVar6;
  char *pcVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  undefined4 uVar13;
  undefined *local_40;
  int local_38;
  int iStack_34;
  int local_4;
  
  sVar5 = *(short *)(param_1 + 0x40a) + -1;
  *(short *)(param_1 + 0x40a) = sVar5;
  if (sVar5 < 1) {
    *(undefined4 *)(param_1 + 0x308) = 0;
    if ((*(char *)(param_1 + 0x432) == '\0') && (lVar10 = *(long *)(param_1 + 0x3d0), lVar10 != 0))
    {
      (**(code **)(*(long *)(lVar10 + 0x2d8) + 0x28))(lVar10 + 0x2d8);
      bVar4 = *(byte *)(*DAT_0537d558 + 0x473);
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
        uVar8 = (long)(char)bVar4 & 0xffffffff;
        pbVar2 = pbVar1 + uVar8 * 0x80;
        if (7 < bVar4) {
          pbVar2 = pbVar1;
        }
        if ((*pbVar2 >> 3 & 1) != 0) {
          lVar10 = DAT_0537d558[2] + 0x108 + uVar8 * 0xc;
          if (0xb < bVar4) {
            lVar10 = DAT_0537d558[2] + 0x108;
          }
          if (*(char *)(lVar10 + 10) == '\0') {
            if (*(long *)(param_1 + 0x3d0) == 0) {
              return;
            }
            FUN_01947900();
            return;
          }
        }
      }
    }
    if (*(long *)(param_1 + 0x3d0) == 0) {
      return;
    }
    FUN_006fb3d0();
    return;
  }
  uVar13 = *(undefined4 *)(param_1 + 0x338);
  fVar12 = *(float *)(param_1 + 0x40c);
  pfVar6 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x460) + 0x30) + 0xf0))();
  fVar12 = fVar12 + *pfVar6;
  pfVar6 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x460) + 0x60) + 0xf0))();
  local_4 = 0;
  if (fVar12 <= *pfVar6) {
    fVar12 = *pfVar6;
  }
  *(float *)(param_1 + 0x40c) = fVar12;
  *(float *)(param_1 + 0x338) = *(float *)(param_1 + 0x338) + fVar12;
  lVar10 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0xa8) == 0)) || (*(char *)(lVar10 + 0x11c8) != '\0')) {
    fVar12 = -500.0;
  }
  else {
    fVar12 = (float)FUN_0093a950(lVar10 + 0x28,param_1 + 0x334,&local_4);
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,local_4);
  lVar10 = FUN_009807cc(DAT_04cfab78 + 8,local_4);
  if (((((lVar10 == 0) ||
        (pcVar7 = (char *)FUN_009823a0(lVar10,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
        pcVar7 == (char *)0x0)) || (*pcVar7 == '\0')) && (local_4 != 0x1d)) ||
     (iVar11 = *(int *)(param_1 + 0x414), *(int *)(param_1 + 0x414) = iVar11 + -1, iVar11 < 1)) {
    if (fVar12 + 3.0 < *(float *)(param_1 + 0x338)) {
      iVar3 = *(int *)(param_1 + 0x414);
      iVar11 = iVar3;
      if (2 < iVar3) {
        iVar11 = 3;
      }
      *(int *)(param_1 + 0x414) = iVar11 + -1;
      if (0 < iVar3) goto LAB_018166f4;
    }
    if (fVar12 <= *(float *)(param_1 + 0x338) + 4.0) {
      local_40 = PTR_DAT_04bb2010 + 0x10;
      local_38 = (int)((float)(int)*(float *)(param_1 + 0x334) / 5.0) -
                 (uint)(*(float *)(param_1 + 0x334) < 0.0);
      iStack_34 = (int)((float)(int)*(float *)(param_1 + 0x33c) / 5.0) -
                  (uint)(*(float *)(param_1 + 0x33c) < 0.0);
      uVar8 = FUN_01a1ab90(&local_40);
      if ((uVar8 & 1) == 0) {
        if (*(float *)(param_1 + 0x338) <= fVar12) {
          *(undefined4 *)(param_1 + 0x318) = 0;
          *(undefined4 *)(param_1 + 0x40c) = 0;
          puVar9 = (undefined4 *)
                   (**(code **)(*(long *)(*(long *)(param_1 + 0x460) + 0xc0) + 0xf0))();
          *(undefined4 *)(param_1 + 0x308) = *puVar9;
          puVar9 = (undefined4 *)
                   (**(code **)(*(long *)(*(long *)(param_1 + 0x468) + 0x158) + 0xf0))
                             (*(long *)(param_1 + 0x468) + 0x158);
          *(undefined4 *)(param_1 + 0x414) = *puVar9;
          if (fVar12 <= *(float *)(param_1 + 0x338)) {
            fVar12 = *(float *)(param_1 + 0x338);
          }
          *(float *)(param_1 + 0x338) = fVar12;
        }
        goto LAB_018167bc;
      }
    }
    lVar10 = *(long *)(param_1 + 0x300);
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(lVar10 + 0x284);
    *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(lVar10 + 0x288);
    *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(lVar10 + 0x28c);
  }
  else {
LAB_018166f4:
    *(undefined4 *)(param_1 + 0x40c) = 0;
    *(undefined4 *)(param_1 + 0x338) = uVar13;
  }
LAB_018167bc:
  fVar12 = *(float *)(param_1 + 0x318) + *(float *)(param_1 + 0x308);
  *(float *)(param_1 + 0x308) = fVar12;
  if (fVar12 < 0.0) {
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  return;
}

