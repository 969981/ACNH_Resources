
void FUN_0183bdf4(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  undefined *local_40;
  char *pcStack_38;
  
  uVar7 = FUN_01813a64();
  if ((uVar7 & 1) != 0) {
    return;
  }
  FUN_0183c168(param_1);
  if (*(char *)(param_1 + 0x3b4) != '\0') {
    if (0.0 < *(float *)(param_1 + 0x308)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x318) = 0;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "FlyWait";
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 0x60), lVar8 != 0)) {
      FUN_0073d870(lVar8,&local_40,10,0,0);
    }
    lVar8 = *(long *)(param_1 + 0x3d0);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x2d8) + 0x28))(lVar8 + 0x2d8);
      puVar6 = PTR_DAT_04bb27d0;
      plVar11 = *(long **)PTR_DAT_04bb27d0;
      uVar7 = FUN_01d3e29c(*plVar11 + 8);
      if ((uVar7 & 1) != 0) {
        bVar5 = *(byte *)(**(long **)puVar6 + 0x473);
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          lVar8 = plVar11[2] + 0x108;
          lVar10 = lVar8 + ((long)(char)bVar5 & 0xffffffffU) * 0xc;
          if (0xb < bVar5) {
            lVar10 = lVar8;
          }
          if (*(char *)(lVar10 + 10) == '\0') {
            return;
          }
        }
      }
      lVar8 = *(long *)(param_1 + 0x3d0);
      if (lVar8 != 0) {
        lVar10 = *(long *)(lVar8 + 0x300);
        if ((lVar10 != 0) && (*(float *)(lVar10 + 0x2b8) < *(float *)(lVar10 + 0x2b0))) {
          FUN_0183bb88(param_1);
          goto LAB_0183c054;
        }
        (**(code **)(*(long *)(lVar8 + 0x2d8) + 0x28))(lVar8 + 0x2d8);
        plVar11 = *(long **)puVar6;
        uVar7 = FUN_01d3e29c(*plVar11 + 8);
        if ((uVar7 & 1) != 0) {
          bVar5 = *(byte *)(**(long **)puVar6 + 0x473);
          if ((long)(char)bVar5 != 0xffffffffffffffff) {
            lVar8 = plVar11[2] + 0x108;
            lVar10 = lVar8 + ((long)(char)bVar5 & 0xffffffffU) * 0xc;
            if (0xb < bVar5) {
              lVar10 = lVar8;
            }
            if (*(char *)(lVar10 + 10) == '\0') goto LAB_0183c054;
          }
        }
      }
    }
    FUN_0183b8d4(param_1);
LAB_0183c054:
    if (*(int *)(param_1 + 0x4b8) == *(int *)(param_1 + 0x4c0)) {
      iVar4 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x4d8) == '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0x3b4) = 0;
      *(undefined1 *)(param_1 + 0x3fa) = 1;
      FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
      if (((*(long *)(param_1 + 0x3d0) != 0) &&
          (lVar8 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x300), lVar8 != 0)) &&
         (*(float *)(lVar8 + 0x2b8) < *(float *)(lVar8 + 0x2b0))) {
        return;
      }
      iVar4 = 6;
    }
    if (*(int *)(param_1 + 0x280) != iVar4) {
      FUN_03ebb160(param_1 + 0x278);
    }
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x4c8);
  pfVar9 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x188) + 0xf0))
                              (*(long *)(param_1 + 0x500) + 0x188);
  fVar12 = *pfVar9;
  pfVar9 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x1e0) + 0xf0))
                              (*(long *)(param_1 + 0x4f8) + 0x1e0);
  uVar3 = *(uint *)(param_1 + 800);
  if (uVar3 == uVar2) {
    lVar10 = 0;
  }
  else {
    uVar1 = uVar3 - uVar2;
    if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
      uVar1 = uVar2 - uVar3;
    }
    if (uVar1 < 0x80000001) {
      lVar8 = -1;
    }
    else {
      lVar8 = 1;
    }
    lVar10 = -lVar8;
    if (uVar2 < uVar3) {
      lVar10 = lVar8;
    }
  }
  lVar10 = lVar10 * (ulong)(uint)(int)(*pfVar9 * (float)((long)(fVar12 * 11930465.0) & 0xffffffff));
  uVar1 = uVar3 + (int)lVar10;
  if (lVar10 < 1) {
    if (-1 < lVar10) {
      if ((int)lVar10 != 0) {
        return;
      }
      goto LAB_0183c104;
    }
    if (uVar1 < uVar3) {
      if (uVar3 < uVar2) goto LAB_0183bfe8;
    }
    else if (uVar2 <= uVar3) goto LAB_0183c100;
    if (uVar2 < uVar1) goto LAB_0183bfe8;
  }
  else {
    if (uVar3 < uVar1) {
      if (uVar2 < uVar3) goto LAB_0183bfe8;
    }
    else if (uVar3 <= uVar2) goto LAB_0183c100;
    if (uVar1 < uVar2) {
LAB_0183bfe8:
      *(uint *)(param_1 + 800) = uVar1;
      return;
    }
  }
LAB_0183c100:
  *(uint *)(param_1 + 800) = uVar2;
LAB_0183c104:
  FUN_0183b5b4(param_1);
  *(undefined1 *)(param_1 + 0x3b4) = 1;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "Fly";
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 0x60);
  if (lVar8 == 0) {
    return;
  }
  FUN_0073d870(lVar8,&local_40,10,0,0);
  return;
}

