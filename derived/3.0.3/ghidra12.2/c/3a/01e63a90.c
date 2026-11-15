
void FUN_01e63a90(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  void *pvVar13;
  undefined8 *puVar14;
  undefined *local_60;
  char *pcStack_58;
  
  puVar1 = (ushort *)(param_1 + 0x12570);
  uVar3 = *puVar1;
  if ((param_2 & 1) == 0) {
    *puVar1 = uVar3 & 0xfffe;
    puVar4 = PTR_DAT_04bb2020;
    if ((param_3 & 1) == 0) {
      *puVar1 = uVar3 & 0xfffa;
      FUN_0209c418(param_1 + 0xaf38);
      if (*(byte *)(param_1 + 0x132d8) < 8) {
        local_60 = puVar4 + 0x10;
        pcStack_58 = "StoodUpFlag";
        FUN_0265d4e0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508),param_1 + 0x132d8,&local_60,0,1
                    );
      }
    }
    FUN_02194700(param_1 + 0xef00);
    puVar14 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
    local_60 = puVar4 + 0x10;
    pcStack_58 = "NpcActivityAIEnable";
    if (((puVar14[0x227] != 0) && (lVar12 = *(long *)(puVar14[0x227] + 0x78), lVar12 != 0)) &&
       (plVar10 = *(long **)(lVar12 + 0x48), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x38))(plVar10,&local_60,0);
    }
    *(undefined1 *)(param_1 + 0x56e8) = 0;
    *(byte *)(param_1 + 0xaa44) = *(byte *)(param_1 + 0xaa44) & 0xbf;
    uVar7 = DAT_053e0cf8;
    *(undefined4 *)(param_1 + 0xaa34) = DAT_053e0cf4;
    uVar8 = DAT_053e0cec;
    uVar6 = DAT_053e0ce4;
    *(undefined4 *)(param_1 + 0xaa38) = uVar7;
    uVar7 = DAT_053e0cfc;
    *(undefined8 *)(param_1 + 0xaa24) = uVar6;
    *(undefined8 *)(param_1 + 0xaa2c) = uVar8;
    *(undefined4 *)(param_1 + 0xaa3c) = uVar7;
    *(undefined4 *)(param_1 + 0xaa40) = DAT_053e0d00;
  }
  else {
    *puVar1 = uVar3 | 1;
    if ((param_4 & 1) == 0) {
      pvVar13 = *(void **)(param_1 + 0x8208);
      (**(code **)(DAT_053908d0 + 0x18))(&DAT_053908d0);
      pvVar5 = DAT_053908d8;
      if (pvVar13 != DAT_053908d8) {
        (**(code **)(DAT_053908d0 + 0x18))(&DAT_053908d0);
        lVar12 = 0;
        do {
          if (*(char *)((long)DAT_053908d8 + lVar12) == '\0') goto LAB_01e63c80;
          if (*(char *)((long)DAT_053908d8 + lVar12 + 1) == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_01e63c80;
          }
          if (*(char *)((long)DAT_053908d8 + lVar12 + 2) == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_01e63c80;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_01e63c80:
        iVar9 = (int)lVar12;
        if (*(int *)(param_1 + 0x8210) <= (int)lVar12) {
          iVar9 = *(int *)(param_1 + 0x8210) + -1;
        }
        memcpy(pvVar13,pvVar5,(long)iVar9);
        *(undefined1 *)((long)pvVar13 + (long)iVar9) = 0;
      }
      pvVar13 = *(void **)(param_1 + 0x8260);
      (**(code **)(DAT_053908e0 + 0x18))(&DAT_053908e0);
      pvVar5 = DAT_053908e8;
      if (pvVar13 != DAT_053908e8) {
        (**(code **)(DAT_053908e0 + 0x18))(&DAT_053908e0);
        lVar12 = 0;
        do {
          if (*(char *)((long)DAT_053908e8 + lVar12) == '\0') goto LAB_01e63d2c;
          if (*(char *)((long)DAT_053908e8 + lVar12 + 1) == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_01e63d2c;
          }
          if (*(char *)((long)DAT_053908e8 + lVar12 + 2) == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_01e63d2c;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_01e63d2c:
        iVar9 = (int)lVar12;
        if (*(int *)(param_1 + 0x8268) <= (int)lVar12) {
          iVar9 = *(int *)(param_1 + 0x8268) + -1;
        }
        memcpy(pvVar13,pvVar5,(long)iVar9);
        *(undefined1 *)((long)pvVar13 + (long)iVar9) = 0;
      }
    }
    *puVar1 = *puVar1 & 0xfffd;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x568) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x56c) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x570) = 0;
    puVar14 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
    puVar4 = PTR_DAT_04bb2020;
    local_60 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "NpcActivityAIEnable";
    if (((puVar14[0x227] != 0) && (lVar12 = *(long *)(puVar14[0x227] + 0x78), lVar12 != 0)) &&
       (plVar10 = *(long **)(lVar12 + 0x48), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x38))(plVar10,&local_60,1);
    }
    lVar12 = *(long *)(param_1 + 0x18);
    uVar11 = FUN_02085a50(lVar12,1,0);
    if ((uVar11 & 1) != 0) {
      *(undefined1 *)(lVar12 + 0x801) = 1;
      lVar2 = lVar12 + 0x10 + (ulong)*(uint *)(lVar12 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar12 + 0x294)) {
        lVar2 = lVar12 + 0x10;
      }
      *(undefined8 *)(lVar2 + 0xc) = 0;
      *(undefined4 *)(lVar2 + 0x14) = 0;
    }
    uVar7 = DAT_053913c0;
    *(undefined4 *)(param_1 + 0xaa40) = DAT_053913cc;
    *(undefined4 *)(param_1 + 0xaa34) = uVar7;
    uVar8 = DAT_053913c4;
    uVar6 = DAT_053913b8;
    *(undefined8 *)(param_1 + 0xaa24) = DAT_053913b0;
    *(undefined8 *)(param_1 + 0xaa2c) = uVar6;
    *(undefined8 *)(param_1 + 0xaa38) = uVar8;
    local_60 = puVar4 + 0x10;
    pcStack_58 = "ApproachUpdateStop";
    FUN_021c98f0(*(undefined8 *)(param_1 + 8),&local_60,0);
  }
  return;
}

