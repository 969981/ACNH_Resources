
void FUN_01ee7850(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  char *__src;
  undefined8 *puVar7;
  char *__dest;
  undefined2 local_130;
  undefined2 uStack_12e;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_44;
  
  lVar6 = *(long *)(param_1 + 0x18);
  uVar3 = FUN_02085a50(lVar6,1,0);
  if ((uVar3 & 1) != 0) {
    *(undefined1 *)(lVar6 + 0x801) = 1;
    lVar5 = lVar6 + 0x10 + (ulong)*(uint *)(lVar6 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar6 + 0x294)) {
      lVar5 = lVar6 + 0x10;
    }
    *(undefined8 *)(lVar5 + 0xc) = 0;
    *(undefined4 *)(lVar5 + 0x14) = 0;
  }
  if (**(char **)(param_1 + 0x78a8) == '\0') {
    __src = "NpcRhythm";
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x78a0) + 0x18))(param_1 + 0x78a0);
    __src = *(char **)(param_1 + 0x78a8);
  }
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_130 = SUB82(puVar1,0);
  uStack_12e = (undefined2)((ulong)puVar1 >> 0x10);
  uStack_12c = (undefined4)((ulong)puVar1 >> 0x20);
  uStack_128 = SUB84(__src,0);
  local_124 = (undefined4)((ulong)__src >> 0x20);
  FUN_017081d0(puVar7,&local_130,6,1,0);
  local_130 = 0;
  uStack_12e = 0;
  lVar6 = *(long *)(param_1 + 0x10);
  local_44 = 0;
  FUN_01e5a930(0x40000000,lVar6,0x1b,PTR_DAT_04bb2150,&local_130,&local_44,PTR_DAT_04bc1600,6);
  __dest = *(char **)(lVar6 + 0x3b8);
  if (*__src != '\0') {
    if (__dest == __src) goto LAB_01ee79e8;
    lVar5 = 0;
    do {
      if (__src[lVar5] == '\0') goto LAB_01ee79bc;
      if (__src[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_01ee79bc;
      }
      if (__src[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_01ee79bc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01ee79bc:
    iVar2 = (int)lVar5;
    if (*(int *)(lVar6 + 0x3c0) <= (int)lVar5) {
      iVar2 = *(int *)(lVar6 + 0x3c0) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    __dest = __dest + iVar2;
  }
  *__dest = '\0';
LAB_01ee79e8:
  *(undefined1 *)(lVar6 + 0x674) = 0;
  *(undefined1 *)(lVar6 + 0x676) = 0;
  uStack_12c = 0xffffffff;
  uStack_128 = 0xffffffff;
  local_124 = 0xffffffff;
  uStack_120 = 0xffffffff;
  local_11c = 0xffffffff;
  local_c4 = 0xffffffffffffffff;
  local_bc = 0xffffffffffffffff;
  local_c8 = 0;
  local_b4 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_130 = 0;
  local_108 = 0xffffffffffffffff;
  uStack_100 = 0xffffffff00000000;
  local_f8 = 0xffffffff00000000;
  uStack_f0 = 0xffffffffffffffff;
  local_b0 = 0xffffffffffffffff;
  uStack_a8 = 0xffffffffbf800000;
  local_118 = 0xbf800000;
  uStack_110 = 0;
  local_60 = 0xffffffff;
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  local_e8 = 0;
  uStack_e0 = 0xffffffff;
  local_d8 = 0xffffffff00000000;
  uStack_d0 = 0xffffffff00000000;
  uVar4 = 0xffffffff;
  if (lVar6 != 0) {
    FUN_029a7b28(*(long *)PTR_DAT_04bb26a8 + 0x6d8,&local_130,lVar6 + 0x278);
    uVar4 = uStack_12c;
  }
  *(undefined4 *)(param_1 + 0xaed8) = uVar4;
  return;
}

