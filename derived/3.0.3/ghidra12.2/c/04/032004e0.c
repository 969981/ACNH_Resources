
void FUN_032004e0(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte bVar15;
  long lVar16;
  undefined8 *puVar17;
  char *pcVar18;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined *local_60;
  undefined4 local_58;
  
  puVar3 = PTR_DAT_04bc4d98;
  pcVar18 = (char *)param_2[1];
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if ((pcVar18 == (char *)0x0) ||
     (uVar6 = (*(code *)**(undefined8 **)pcVar18)(pcVar18,PTR_DAT_04bc4d90), (uVar6 & 1) == 0)) {
    if (((*PTR_DAT_04bc6380 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc6380), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc6378 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc6380);
    }
    if (pcVar18 != (char *)0x0) {
      uVar6 = (*(code *)**(undefined8 **)pcVar18)(pcVar18,PTR_DAT_04bc6378);
      pcVar18 = pcVar18 + 0x3a0;
      if ((uVar6 & 1) == 0) {
        pcVar18 = (char *)0x0;
      }
    }
  }
  else {
    pcVar18 = pcVar18 + 0x400;
  }
  puVar2 = PTR_DAT_04bb2230;
  iVar5 = *(int *)((long)param_2 + 0x14);
  if (iVar5 == 5) {
    if ((pcVar18 == (char *)0x0) || (pcVar18[2] != '\0')) {
      puVar17 = (undefined8 *)param_2[1];
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4d98);
      }
      if (((puVar17 != (undefined8 *)0x0) &&
          (uVar6 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bc4d90), (uVar6 & 1) != 0)) &&
         (iVar5 = *(int *)(puVar17 + 0x56), *(int *)(param_2 + 3) != 3)) {
        lVar11 = *(long *)(param_1 + 0x220);
        if (((lVar11 != 0) || (lVar11 = *(long *)(*(long *)(param_1 + 0x210) + 0x570), lVar11 != 0))
           && (plVar7 = *(long **)(lVar11 + 0x208), plVar7 != (long *)0x0)) {
          local_60 = PTR_DAT_04bc4e68 + 0x10;
          local_58 = 1;
          (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
          (**(code **)(plVar7[3] + 400))(0x3f800000,plVar7[1]);
        }
        if (iVar5 == 0) {
          *(undefined1 *)(param_1 + 0x26c) = 1;
        }
      }
    }
  }
  else {
    if (iVar5 == 1) {
      *(undefined8 *)(param_1 + 0x218) = 0;
      *(undefined1 *)(param_1 + 0x26c) = 1;
      lVar16 = *(long *)puVar2;
      *(undefined1 *)(lVar16 + 0x270) = 0;
      *(undefined8 *)(lVar16 + 0x274) = 0;
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar11 == 0) {
        iVar5 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar5 = (int)lVar11 + -1;
      }
      uVar10 = 1;
      if (iVar5 != 1) {
        uVar10 = 2;
      }
      uVar1 = 0;
      if (iVar5 != 0) {
        uVar1 = uVar10;
      }
      pbVar13 = (byte *)(lVar16 + 0x288);
      pbVar14 = pbVar13 + (ulong)uVar1 * 0x44;
      if (2 < uVar1) {
        pbVar14 = pbVar13;
      }
      pbVar14[8] = 0;
      pbVar14[9] = 0;
      pbVar14[10] = 0;
      pbVar14[0xb] = 0;
      pbVar14[0xc] = 0;
      pbVar14[0xd] = 0;
      pbVar14[0xe] = 0;
      pbVar14[0xf] = 0;
      bVar15 = pbVar14[4] & 0xfe;
    }
    else {
      if (iVar5 != 0) {
        return;
      }
      lVar11 = *(long *)(param_1 + 0x220);
      if (((lVar11 != 0) && (lVar11 != param_3)) &&
         (plVar7 = *(long **)(lVar11 + 0x1b0), plVar7 != (long *)0x0)) {
        (**(code **)(*plVar7 + 0x30))(plVar7,0);
      }
      *(long *)(param_1 + 0x220) = param_3;
      puVar17 = (undefined8 *)*param_2;
      if (((*PTR_DAT_04bc4c80 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4c80), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bc4c78 = PTR_DAT_04bc4c88 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4c80);
      }
      if (((puVar17 == (undefined8 *)0x0) ||
          (uVar6 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bc4c78), (uVar6 & 1) == 0)) ||
         (*(char *)(puVar17 + 0xad) != '\0')) {
        plVar7 = *(long **)(param_1 + 0x220);
        if ((((plVar7 != (long *)0x0) ||
             (plVar7 = *(long **)(*(long *)(param_1 + 0x210) + 0x570), plVar7 != (long *)0x0)) &&
            ((*(char *)(param_1 + 0x270) == '\0' ||
             (((long *)plVar7[0x36] != (long *)0x0 &&
              (uVar6 = (**(code **)(*(long *)plVar7[0x36] + 0x50))(), (uVar6 & 1) != 0)))))) &&
           (plVar8 = (long *)plVar7[0x36], plVar8 != (long *)0x0)) {
          (**(code **)(*plVar8 + 0x28))(plVar8,0);
          (**(code **)(*plVar7 + 0xa8))(plVar7);
        }
        if (param_2[1] != 0) {
          uVar12 = *(undefined8 *)(param_2[1] + 0x218);
          *(undefined1 *)(param_1 + 0x26c) = 0;
          *(undefined8 *)(param_1 + 0x218) = uVar12;
        }
        if (pcVar18 != (char *)0x0) {
          uVar9 = 1;
          if (pcVar18[1] != '\0') {
            uVar9 = 2;
          }
          *(undefined4 *)(param_1 + 0x268) = uVar9;
        }
        *(undefined4 *)(param_1 + 0x264) = 1;
      }
      local_68 = 0;
      puVar17 = (undefined8 *)param_2[1];
      local_70 = 0;
      uStack_6c = 0;
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4d98);
      }
      puVar3 = PTR_DAT_04bb2230;
      if ((puVar17 == (undefined8 *)0x0) ||
         (uVar6 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bc4d90), (uVar6 & 1) == 0)) {
        puVar17 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc6380 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc6380), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bc6378 = PTR_DAT_04bc4da0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc6380);
        }
        if ((puVar17 != (undefined8 *)0x0) &&
           (uVar6 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bc6378), (uVar6 & 1) != 0)) {
          local_78 = 0;
          plVar7 = (long *)puVar17[0x62];
          local_80 = 0;
          local_60 = PTR_DAT_04bc0cb8 + 0x10;
          local_58 = 0x29;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_60);
          (**(code **)(plVar7[3] + 0x2b0))(&local_80,plVar7[1]);
          local_70 = (undefined4)local_80;
          uStack_6c = local_80._4_4_;
          local_68 = local_78;
          if ((pcVar18 != (char *)0x0) && (*pcVar18 != '\0')) {
            lVar11 = *(long *)puVar3;
            *(undefined1 *)(lVar11 + 0x270) = 1;
            *(undefined4 *)(lVar11 + 0x274) = (undefined4)local_80;
            *(undefined4 *)(lVar11 + 0x278) = local_80._4_4_;
          }
        }
      }
      else {
        if ((pcVar18 != (char *)0x0) && (*pcVar18 != '\0')) {
          local_78 = 0;
          plVar7 = (long *)puVar17[0x3a];
          local_80 = 0;
          local_60 = PTR_DAT_04bc0cb8 + 0x10;
          local_58 = 0x29;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_60);
          (**(code **)(plVar7[3] + 0x2b0))(&local_80,plVar7[1]);
          lVar11 = *(long *)puVar3;
          *(undefined1 *)(lVar11 + 0x270) = 1;
          *(undefined4 *)(lVar11 + 0x278) = local_80._4_4_;
          *(undefined4 *)(lVar11 + 0x274) = (undefined4)local_80;
        }
        if (((puVar17[0x43] != 0) &&
            (plVar7 = *(long **)(puVar17[0x43] + 0x14c8), plVar7 != (long *)0x0)) &&
           (plVar7[1] != 0)) {
          local_60 = PTR_DAT_04bc0cb8 + 0x10;
          local_58 = 0x29;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_60);
          (**(code **)(plVar7[3] + 0x2b0))(&local_70,plVar7[1]);
        }
      }
      uVar4 = uStack_6c;
      uVar9 = local_70;
      lVar16 = *(long *)puVar3;
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar11 == 0) {
        iVar5 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar5 = (int)lVar11 + -1;
      }
      uVar10 = 1;
      if (iVar5 != 1) {
        uVar10 = 2;
      }
      uVar1 = 0;
      if (iVar5 != 0) {
        uVar1 = uVar10;
      }
      pbVar13 = (byte *)(lVar16 + 0x288);
      pbVar14 = pbVar13 + (ulong)uVar1 * 0x44;
      if (2 < uVar1) {
        pbVar14 = pbVar13;
      }
      *(undefined4 *)(pbVar14 + 8) = uVar9;
      *(undefined4 *)(pbVar14 + 0xc) = uVar4;
      bVar15 = pbVar14[4] | 1;
    }
    pbVar14[4] = bVar15;
    pbVar14 = pbVar13 + (ulong)uVar1 * 0x44;
    if (2 < uVar1) {
      pbVar14 = pbVar13;
    }
    *pbVar14 = *pbVar14 | 1;
  }
  return;
}

