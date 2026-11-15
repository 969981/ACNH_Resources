
void FUN_0207c988(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined4 local_80 [2];
  undefined *local_78;
  undefined8 local_70;
  uint local_68;
  undefined1 local_64 [31];
  undefined1 local_45;
  
  puVar7 = *(undefined8 **)(*(long *)(param_2 + 8) + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  puVar1 = PTR_DAT_04bb43c0;
  lVar9 = puVar7[0x290];
  if (*(char *)(lVar9 + 0x1d5) != '\0') {
    puVar8 = (undefined *)(lVar9 + 0xcc);
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(puVar8);
    if (*(long *)puVar1 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) goto LAB_0207ca50;
    }
    iVar5 = FUN_0277d6c4(puVar8);
    if (iVar5 == 0xfffd) {
      puVar8 = PTR_DAT_04bb37e0;
      goto LAB_0207ca50;
    }
  }
  puVar8 = (undefined *)(lVar9 + 0xd4);
LAB_0207ca50:
  uVar6 = FUN_0277d7b4(puVar8,(undefined2 *)(param_2 + 0x7840));
  if ((uVar6 & 1) == 0) {
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    lVar9 = *(long *)(param_2 + 0x10);
    local_80[0] = 0;
    FUN_01e5a930(0x40000000,lVar9,0xe,PTR_DAT_04bb2150,&local_78,local_80,PTR_DAT_04bc1600,6);
    local_45 = 0;
    local_68 = 0x20;
    local_64[0] = 0;
    *(undefined2 *)(lVar9 + 0x408) = *(undefined2 *)(param_2 + 0x7840);
    *(undefined1 *)(lVar9 + 0x40a) = *(undefined1 *)(param_2 + 0x7842);
    *(undefined1 *)(lVar9 + 0x40b) = *(undefined1 *)(param_2 + 0x7843);
    *(undefined4 *)(lVar9 + 0x40c) = *(undefined4 *)(param_2 + 0x7844);
    local_70 = local_64;
    lVar9 = *(long *)(lVar9 + 0x358);
    local_78 = PTR_DAT_04bb2028 + 0x10;
    (**(code **)(*(long *)(lVar9 + 0x3e0) + 0x18))(lVar9 + 0x3e0);
    FUN_038d1270(&local_78,"NpcActorAction.%s",*(undefined8 *)(lVar9 + 1000));
  }
  local_70 = (undefined1 *)((ulong)local_70 & 0xffffffff00000000);
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if (lVar9 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar5 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  local_70 = (undefined1 *)CONCAT44(*(undefined4 *)(puVar7 + 7),(undefined4)local_70);
  uVar2 = FUN_017baf44();
  local_68 = CONCAT31(local_68._1_3_,uVar2) & 0xffffff01;
  local_78 = PTR_DAT_04bb3140 + 0x10;
  FUN_01a5033c(local_80,&local_78,1,param_2 + 0x7810,0);
  bVar3 = FUN_0277e294(local_80);
  *(byte *)(param_2 + 0x789d) = bVar3 & 1;
  return;
}

