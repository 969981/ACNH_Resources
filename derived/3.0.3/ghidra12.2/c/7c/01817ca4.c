
bool FUN_01817ca4(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined *local_48;
  int local_40;
  int iStack_3c;
  undefined *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  byte local_28;
  undefined7 uStack_27;
  undefined2 local_8;
  undefined1 local_6;
  undefined1 local_5;
  undefined4 local_4;
  
  plVar7 = *(long **)(param_1 + 8);
  uVar4 = (**(code **)(*plVar7 + 0x1c8))(plVar7);
  if ((uVar4 & 1) == 0) {
    bVar1 = false;
  }
  else {
    fVar9 = *(float *)(plVar7[0x60] + 0x278);
    fVar10 = *(float *)(plVar7[0x60] + 0x280);
    local_30 = 0;
    local_48 = PTR_DAT_04bb2010 + 0x10;
    local_38 = PTR_DAT_04bbfe68 + 0x10;
    local_40 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    iStack_3c = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
    lVar6 = *(long *)PTR_DAT_04bb2720;
    if (lVar6 == 0) {
      puVar8 = &DAT_055c04a0;
    }
    else {
      puVar8 = &DAT_055c04a0;
      if (*(long *)(lVar6 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
        iVar2 = FUN_006bd550(*puVar8,0);
        puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar8 = &DAT_055c04a0;
        }
      }
    }
    local_2c = *(undefined4 *)(puVar8 + 7);
    local_28 = FUN_017baf44();
    local_28 = local_28 & 1;
    puVar5 = (undefined2 *)FUN_01a5190c(&local_38,0,&local_48,0);
    local_8 = *puVar5;
    local_6 = *(undefined1 *)(puVar5 + 1);
    local_5 = *(undefined1 *)((long)puVar5 + 3);
    local_4 = *(undefined4 *)(puVar5 + 2);
    FUN_0277d6c4(&local_8);
    lVar6 = *(long *)PTR_DAT_04bbbc68;
    if (((((lVar6 != 0) && (*(long *)(lVar6 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(lVar6 + 0xb0) + 8) != 0)) &&
        ((*(long *)(lVar6 + 0x488) != 0 && (*(long *)(*(long *)(lVar6 + 0x488) + 8) != 0)))) &&
       ((*(long *)(lVar6 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar6 + 0x2b0) + 8) != 0)))) {
      uVar3 = FUN_0277d6c4(&local_8);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        FUN_0124c030(&local_38,&local_8);
        iVar2 = FUN_0123db50(&local_30,CONCAT71(uStack_27,local_28));
        return (iVar2 - 2U & 0xfffffff9) != 0;
      }
    }
    bVar1 = true;
  }
  return bVar1;
}

