
uint FUN_01817a14(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined2 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  undefined *local_48;
  int local_40;
  int iStack_3c;
  undefined *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  byte local_28;
  undefined2 local_8;
  undefined1 local_6;
  undefined1 local_5;
  undefined4 local_4;
  
  plVar6 = *(long **)(param_1 + 8);
  uVar3 = (**(code **)(*plVar6 + 0x1c8))(plVar6);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    fVar8 = *(float *)(plVar6[0x60] + 0x278);
    fVar9 = *(float *)(plVar6[0x60] + 0x280);
    local_30 = 0;
    local_48 = PTR_DAT_04bb2010 + 0x10;
    local_38 = PTR_DAT_04bbfe68 + 0x10;
    local_40 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iStack_3c = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    lVar5 = *(long *)PTR_DAT_04bb2720;
    if (lVar5 == 0) {
      puVar7 = &DAT_055c04a0;
    }
    else {
      puVar7 = &DAT_055c04a0;
      if (*(long *)(lVar5 + 0x330) != 0) {
        puVar7 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
        iVar1 = FUN_006bd550(*puVar7,0);
        puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar1 != 0x758f7eaf) {
          puVar7 = &DAT_055c04a0;
        }
      }
    }
    local_2c = *(undefined4 *)(puVar7 + 7);
    local_28 = FUN_017baf44();
    local_28 = local_28 & 1;
    puVar4 = (undefined2 *)FUN_01a5190c(&local_38,0,&local_48,0);
    local_8 = *puVar4;
    local_6 = *(undefined1 *)(puVar4 + 1);
    local_5 = *(undefined1 *)((long)puVar4 + 3);
    local_4 = *(undefined4 *)(puVar4 + 2);
    FUN_0277d6c4(&local_8);
    lVar5 = *(long *)PTR_DAT_04bbbc68;
    if (((((lVar5 != 0) && (*(long *)(lVar5 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(lVar5 + 0xb0) + 8) != 0)) &&
        ((*(long *)(lVar5 + 0x488) != 0 && (*(long *)(*(long *)(lVar5 + 0x488) + 8) != 0)))) &&
       ((*(long *)(lVar5 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar5 + 0x2b0) + 8) != 0)))) {
      uVar2 = FUN_0277d6c4(&local_8);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        FUN_0124c030(&local_38,&local_8);
        uVar2 = FUN_0124dc64(&local_38,0);
        uVar2 = uVar2 ^ 1;
        goto LAB_01817c00;
      }
    }
    uVar2 = 1;
  }
LAB_01817c00:
  return uVar2 & 1;
}

