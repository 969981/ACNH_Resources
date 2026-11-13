
/* WARNING: Removing unreachable block (ram,0x0125f238) */
/* WARNING: Removing unreachable block (ram,0x0125f1f0) */
/* WARNING: Removing unreachable block (ram,0x0125eff8) */
/* WARNING: Removing unreachable block (ram,0x0125efe8) */
/* WARNING: Removing unreachable block (ram,0x0125f004) */
/* WARNING: Removing unreachable block (ram,0x0125f188) */
/* WARNING: Removing unreachable block (ram,0x0125f214) */
/* WARNING: Removing unreachable block (ram,0x0125f25c) */

undefined8 FUN_0125efa4(float *param_1,undefined4 *param_2)

{
  short sVar1;
  float *pfVar2;
  ulong uVar3;
  long lVar4;
  short sVar5;
  undefined2 *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  uint local_44;
  
  if ((((param_1 != (float *)0x0) && (param_2 != (undefined4 *)0x0)) &&
      (*(long *)(DAT_0519d040 + 0x1f8) != 0)) &&
     (lVar4 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xb8), lVar4 != 0)) {
    puVar6 = &DAT_051570e4;
    iVar7 = 0;
    lVar4 = lVar4 + 0x10;
    do {
      sVar1 = *(short *)(lVar4 + (long)iVar7 * 0x18 + 8);
      sVar5 = DAT_051570e4;
      if (DAT_051570e4 == sVar1) {
LAB_0125f11c:
        lVar4 = lVar4 + (long)iVar7 * 0x18;
        iVar7 = *(int *)(lVar4 + 0xc);
        iVar10 = *(int *)(lVar4 + 0x10);
        fVar11 = *(float *)(puVar6 + 2);
        fVar8 = *(float *)(puVar6 + 6);
        fVar9 = 0.0;
        if (((*(long *)PTR_DAT_04bb2200 != 0) &&
            (lVar4 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar4 != 0)) &&
           ((lVar4 = *(long *)(lVar4 + 0x118), lVar4 != 0 &&
            ((lVar4 = *(long *)(lVar4 + 0x280), lVar4 != 0 &&
             (lVar4 = *(long *)(lVar4 + 8), lVar4 != 0)))))) {
          pfVar2 = (float *)(**(code **)(*(long *)(lVar4 + 0x488) + 0xf0))(lVar4 + 0x488);
          fVar9 = *pfVar2;
        }
        *param_1 = (float)iVar7 * 160.0 + fVar11;
        param_1[1] = fVar9;
        param_1[2] = (float)iVar10 * 160.0 + fVar8;
        *param_2 = *(undefined4 *)(puVar6 + 8);
        uVar3 = FUN_013884a0();
        if ((uVar3 & 1) != 0) {
          lVar4 = FUN_01260194(0xe7);
          local_44 = 0;
          if (((((DAT_05618008 == sVar5) || (local_44 = 1, DAT_05618028 == sVar5)) ||
               (local_44 = 2, DAT_05618048 == sVar5)) || (local_44 = 3, DAT_05618068 == sVar5)) &&
             ((local_44 < *(uint *)(lVar4 + 0x420) &&
              (lVar4 = *(long *)(*(long *)(lVar4 + 0x428) + (long)(int)local_44 * 8), lVar4 != 0))))
          {
            pfVar2 = (float *)(**(code **)(*(long *)(lVar4 + 0x140) + 0xf0))(lVar4 + 0x140);
            *param_1 = *param_1 + *pfVar2;
            param_1[1] = param_1[1] + pfVar2[1];
            param_1[2] = param_1[2] + pfVar2[2];
            return 1;
          }
        }
        return 1;
      }
      if (DAT_051570f8 == sVar1) {
        puVar6 = &DAT_051570f8;
        sVar5 = DAT_051570f8;
        goto LAB_0125f11c;
      }
      if (DAT_0515710c == sVar1) {
        puVar6 = &DAT_0515710c;
        sVar5 = DAT_0515710c;
        goto LAB_0125f11c;
      }
      if (DAT_05157120 == sVar1) {
        puVar6 = &DAT_05157120;
        sVar5 = DAT_05157120;
        goto LAB_0125f11c;
      }
      if (DAT_05157134 == sVar1) {
        puVar6 = &DAT_05157134;
        sVar5 = DAT_05157134;
        goto LAB_0125f11c;
      }
      if (DAT_05157148 == sVar1) {
        puVar6 = &DAT_05157148;
        sVar5 = DAT_05157148;
        goto LAB_0125f11c;
      }
      if (DAT_0515715c == sVar1) {
        puVar6 = &DAT_0515715c;
        sVar5 = DAT_0515715c;
        goto LAB_0125f11c;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x48);
  }
  return 0;
}

