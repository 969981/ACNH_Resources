
/* WARNING: Removing unreachable block (ram,0x01d4ffc8) */

void FUN_01d4fdc8(long param_1)

{
  uint *puVar1;
  char *pcVar2;
  uint *puVar3;
  char *pcVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  int *piVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  iVar12 = DAT_0536d328;
  piVar13 = (int *)local_40;
  iVar9 = *(int *)(param_1 + 0x5c);
  if (iVar9 == 2) {
    if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
      return;
    }
    uVar15 = 3;
    if (*(int *)(param_1 + 8) != 1) {
      uVar15 = 4;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar15;
    lVar16 = *(long *)PTR_DAT_04bb2230;
    goto LAB_01d4ffb8;
  }
  if (iVar9 != 1) {
    if (iVar9 != 0) {
      return;
    }
    uVar10 = FUN_02f07acc();
    puVar8 = PTR_DAT_04bb8460;
    if ((uVar10 & 1) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x90) == '\0') {
      if (*(char *)(param_1 + 0x61) == '\0') {
        local_38 = CONCAT31(local_38._1_3_,0xff);
        FUN_01de717c(&DAT_0536d320,&local_38,1);
        *(undefined4 *)(param_1 + 0x5c) = 1;
        return;
      }
      lVar16 = **(long **)PTR_DAT_04bb27d0;
      bVar7 = *(byte *)(lVar16 + 0x473);
      puVar1 = (uint *)(lVar16 + 0x48);
      puVar3 = puVar1 + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
      if (7 < bVar7) {
        puVar3 = puVar1;
      }
      if ((long)(char)bVar7 != 0xffffffffffffffff) {
        uVar5 = *(uint *)(param_1 + 100);
        pcVar2 = (char *)(lVar16 + 0x473);
        pcVar4 = PTR_DAT_04bc1220;
        if ((*puVar3 & 8) != 0) {
          pcVar4 = pcVar2;
        }
        if (((*pcVar4 != '\0' && (*puVar3 & 8) != 0) && ((*(byte *)puVar1 >> 3 & 1) != 0)) &&
           ((uVar5 & 1) == 0)) {
          return;
        }
        pcVar4 = PTR_DAT_04bc1220;
        if ((*puVar3 & 8) != 0) {
          pcVar4 = pcVar2;
        }
        if (((*pcVar4 != '\x01' && (*puVar3 & 8) != 0) && ((*(byte *)(lVar16 + 200) >> 3 & 1) != 0))
           && ((uVar5 >> 1 & 1) == 0)) {
          return;
        }
        pcVar4 = PTR_DAT_04bc1220;
        if ((*puVar3 & 8) != 0) {
          pcVar4 = pcVar2;
        }
        if (((*pcVar4 != '\x02' && (*puVar3 & 8) != 0) &&
            ((*(byte *)(lVar16 + 0x148) >> 3 & 1) != 0)) && ((uVar5 >> 2 & 1) == 0)) {
          return;
        }
        pcVar4 = PTR_DAT_04bc1220;
        if ((*puVar3 & 8) != 0) {
          pcVar4 = pcVar2;
        }
        if (((*pcVar4 != '\x03' && (*puVar3 & 8) != 0) &&
            ((*(byte *)(lVar16 + 0x1c8) >> 3 & 1) != 0)) && ((uVar5 >> 3 & 1) == 0)) {
          return;
        }
        pcVar4 = PTR_DAT_04bc1220;
        if ((*puVar3 & 8) != 0) {
          pcVar4 = pcVar2;
        }
        if (((*pcVar4 != '\x04' && (*puVar3 & 8) != 0) &&
            ((*(byte *)(lVar16 + 0x248) >> 3 & 1) != 0)) && ((uVar5 >> 4 & 1) == 0)) {
          return;
        }
        pcVar4 = PTR_DAT_04bc1220;
        if ((*puVar3 & 8) != 0) {
          pcVar4 = pcVar2;
        }
        if (((*pcVar4 != '\x05' && (*puVar3 & 8) != 0) &&
            ((*(byte *)(lVar16 + 0x2c8) >> 3 & 1) != 0)) && ((uVar5 >> 5 & 1) == 0)) {
          return;
        }
        pcVar4 = PTR_DAT_04bc1220;
        if ((*puVar3 & 8) != 0) {
          pcVar4 = pcVar2;
        }
        if ((((*pcVar4 != '\x06') && ((*puVar3 & 8) != 0)) &&
            ((*(byte *)(lVar16 + 0x348) >> 3 & 1) != 0)) && ((uVar5 >> 6 & 1) == 0)) {
          return;
        }
        pcVar4 = PTR_DAT_04bc1220;
        if ((*puVar3 & 8) != 0) {
          pcVar4 = pcVar2;
        }
        if (((*pcVar4 != '\a') && ((*puVar3 & 8) != 0)) &&
           (((*(byte *)(lVar16 + 0x3c8) >> 3 & 1) != 0 && ((uVar5 >> 7 & 1) == 0)))) {
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(long *)PTR_DAT_04bc3838 == 0) {
        *(undefined4 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x58) = 2;
      }
      else {
        FUN_027c3dcc();
        *(undefined4 *)(param_1 + 100) = 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0x61) == '\0') {
        *(undefined1 *)(param_1 + 0x60) = 1;
        uVar15 = 3;
        goto LAB_01d50204;
      }
      if (*(int *)(param_1 + 0x80) == 0) {
        return;
      }
      lVar19 = *(long *)PTR_DAT_04bb8460;
      lVar17 = *(long *)(lVar19 + 8);
      lVar16 = lVar19;
      if (lVar17 == 0) {
LAB_01d4fe54:
        if ((*(char *)(lVar16 + 0x3c) != '\0') && (*(char *)(lVar16 + 0x3d) != '\0')) {
          *(undefined4 *)(param_1 + 0x88) = 7;
          if (*(long *)(lVar19 + 8) != 0) {
            nn::os::SignalLightEvent((LightEventType *)(*(long *)(lVar19 + 8) + 0x20));
          }
          goto LAB_01d50200;
        }
      }
      else {
        uVar11 = nn::os::ConvertToTimeSpan(1);
        uVar10 = nn::os::TimedWaitLightEvent(lVar17 + 0x20,uVar11);
        if ((uVar10 & 1) == 0) {
          return;
        }
        lVar16 = *(long *)puVar8;
        if (lVar16 != 0) goto LAB_01d4fe54;
      }
      *(long *)(lVar19 + 0x68) = param_1 + 0x68;
    }
LAB_01d50200:
    uVar15 = 1;
LAB_01d50204:
    *(undefined4 *)(param_1 + 0x5c) = uVar15;
    return;
  }
  if (*(char *)(param_1 + 0x90) == '\0') {
    if (*(char *)(param_1 + 0x61) != '\0') {
      local_3c = *(int *)(param_1 + 0x58);
      if (local_3c == 0) goto LAB_01d50010;
      local_40[0] = 1;
      if (local_3c != 1) {
        local_40[0] = 2;
      }
      *(undefined1 *)(param_1 + 0x60) = local_40[0];
      local_32 = 0;
      local_34 = 0xff00;
      if (-1 < DAT_0536d328) {
        iVar12 = DAT_0536d328;
        goto LAB_01d4ff64;
      }
    }
LAB_01d4ff7c:
    cVar6 = *(char *)(param_1 + 0x60);
  }
  else {
    if (*(char *)(param_1 + 0x61) == '\0') goto LAB_01d4ff7c;
    if (*(int *)(param_1 + 0x88) != 0) {
      uVar14 = 1;
      if (*(int *)(param_1 + 0x88) != 1) {
        uVar14 = 2;
      }
      *(undefined1 *)(param_1 + 0x60) = uVar14;
      local_3c = CONCAT31(local_3c._1_3_,uVar14);
      local_32 = 0;
      local_34 = 0xff00;
      if (-1 < iVar12) {
        piVar13 = &local_3c;
LAB_01d4ff64:
        local_32 = 0;
        local_34 = 0xff00;
        local_38 = 0;
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,iVar12,&local_38,piVar13,1,0);
      }
      goto LAB_01d4ff7c;
    }
LAB_01d50010:
    *(undefined1 *)(param_1 + 0x60) = 0;
    cVar6 = *(char *)(param_1 + 0x60);
  }
  if (cVar6 == '\0') {
    return;
  }
  if (cVar6 == '\x01') {
    uVar15 = 3;
  }
  else {
    uVar15 = 4;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar15;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  lVar16 = *(long *)PTR_DAT_04bb2230;
LAB_01d4ffb8:
  local_38 = 0xd;
  puVar18 = *(undefined8 **)(lVar16 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar9 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if ((puVar18 != (undefined8 *)0x0) &&
     (uVar10 = (**(code **)*puVar18)(puVar18,PTR_DAT_04bc73c0), (uVar10 & 1) != 0)) {
    *(undefined1 *)(puVar18[0x52] + 0x254) = 1;
  }
  return;
}

