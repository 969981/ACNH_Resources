
void FUN_02485f20(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined2 *puVar5;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  byte local_68 [8];
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  puVar1 = PTR_DAT_04bb37e0;
  *(undefined2 *)(puVar9 + 0xb86) = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)((long)puVar9 + 0x5c32) = puVar1[2];
  *(undefined *)((long)puVar9 + 0x5c33) = puVar1[3];
  *(undefined4 *)((long)puVar9 + 0x5c34) = *(undefined4 *)(puVar1 + 4);
  uVar2 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar2 & 0xfffffffe;
  if ((uVar2 & 1) != 0) {
    bVar6 = *(byte *)(param_1 + 0x1ee8);
    bVar7 = *(byte *)(param_1 + 0x1900);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    local_60 = CONCAT31(local_60._1_3_,bVar6);
    FUN_0266b170(&local_60,(int)(char)bVar7);
    local_68[0] = bVar6;
    FUN_0266a1c0(local_68,(uint)(int)(char)bVar7 >> 7 & 1 ^ 1);
    FUN_023203ac(param_1,0,0);
    local_60 = 0;
    local_58 = 6;
    local_5c = (ushort)local_5c._1_1_ << 8;
    local_52 = 0;
    local_54 = 0;
    FUN_02321e44(local_68,param_1,&local_60);
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f0960);
      puVar10 = (uint *)&DAT_054f0958;
      if (iVar3 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar10 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar10 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
      puVar10 = puVar10 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
    }
  }
  local_60 = 0;
  *puVar10 = *puVar10 & 0xffffffdf;
  bVar6 = *(byte *)(param_1 + 0x1901);
  if (3 < bVar6) {
    bVar6 = 0;
  }
  if (bVar6 == 0) {
    uVar8 = *(undefined2 *)puVar1;
    uVar12 = puVar1[2];
    uVar13 = puVar1[3];
    uVar11 = *(undefined4 *)(puVar1 + 4);
    bVar6 = *(byte *)(param_1 + 0x1900);
    if (-1 < (char)bVar6) {
      bVar7 = *(byte *)(param_1 + 0x1ee8);
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      local_60 = (uint)bVar7;
      lVar4 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_60,1);
      if ((bVar6 < 8) && (lVar4 != 0)) {
        lVar4 = lVar4 + (ulong)bVar6 * 0x2450;
        if ((*(long **)(lVar4 + 0x3f60) == (long *)0x0) ||
           (puVar9 = (undefined8 *)**(long **)(lVar4 + 0x3f60), puVar9 == (undefined8 *)0x0)) {
          uVar2 = 1;
        }
        else {
          uVar2 = (**(code **)*puVar9)();
          uVar2 = uVar2 ^ 1;
        }
        puVar5 = (undefined2 *)FUN_026e8d10(*(long *)(lVar4 + 0x3f48) + *(long *)(lVar4 + 0x3f40));
        uVar8 = *puVar5;
        uVar12 = *(undefined1 *)(puVar5 + 1);
        uVar13 = *(undefined1 *)((long)puVar5 + 3);
        uVar11 = *(undefined4 *)(puVar5 + 2);
        if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x3f60) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar4 + 0x3f60) + 8), puVar9 != (undefined8 *)0x0))
        {
          (**(code **)*puVar9)();
        }
      }
    }
    bVar6 = *(byte *)(param_1 + 0x1ee8);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    local_60._0_2_ = CONCAT11(*(int *)(param_1 + 0x178) == 0,bVar6);
    local_5c = uVar8;
    local_5a = uVar12;
    local_59 = uVar13;
    local_58 = uVar11;
    FUN_0230aa50(&local_60);
  }
  else if (bVar6 == 2) {
    bVar6 = *(byte *)(param_1 + 0x1ee8);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    local_60._0_2_ = CONCAT11(*(int *)(param_1 + 0x178) == 0,bVar6);
    local_60 = (uint)(ushort)local_60;
    if ((*(long *)PTR_DAT_04bb3968 != 0) &&
       (lVar4 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0), lVar4 != 0)) {
      FUN_0211f408(lVar4,&local_60);
    }
  }
  return;
}

