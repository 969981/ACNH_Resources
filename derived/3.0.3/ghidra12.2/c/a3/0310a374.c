
/* WARNING: Removing unreachable block (ram,0x0310a54c) */
/* WARNING: Removing unreachable block (ram,0x0310a514) */
/* WARNING: Removing unreachable block (ram,0x0310a4dc) */
/* WARNING: Removing unreachable block (ram,0x0310a4a4) */
/* WARNING: Removing unreachable block (ram,0x0310a3bc) */
/* WARNING: Removing unreachable block (ram,0x0310a488) */
/* WARNING: Removing unreachable block (ram,0x0310a4c0) */
/* WARNING: Removing unreachable block (ram,0x0310a4f8) */
/* WARNING: Removing unreachable block (ram,0x0310a530) */
/* WARNING: Removing unreachable block (ram,0x0310a568) */

void FUN_0310a374(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 local_60;
  undefined4 local_58;
  
  local_70 = (undefined1 *)*param_2;
  puStack_68 = (undefined1 *)param_2[1];
  local_60 = (undefined *)CONCAT44(local_60._4_4_,2);
  if ((*(long *)(param_1 + 0x218) != 0) &&
     (plVar7 = *(long **)(*(long *)(param_1 + 0x218) + 0x218), plVar7 != (long *)0x0)) {
    fVar15 = *(float *)((long)param_2 + 0xc);
    bVar2 = false;
    bVar3 = true;
    if (-1.1920929e-07 <= fVar15) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar15)) {
        bVar2 = fVar15 == 1.1920929e-07;
        bVar3 = 1.1920929e-07 <= fVar15;
      }
    }
    if (!bVar3 || bVar2) {
      local_60 = PTR_DAT_04bc4f00 + 0x10;
      local_58 = 0x14;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
      (**(code **)(plVar7[3] + 0x158))(0x3f800000,plVar7[1]);
      local_70 = &DAT_3f8000003f800000;
      puStack_68 = &DAT_3f8000003f800000;
    }
    else {
      local_60 = PTR_DAT_04bc4f00 + 0x10;
      local_58 = 0x14;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
      (**(code **)(plVar7[3] + 0x158))(0,plVar7[1]);
    }
  }
  lVar5 = *(long *)(param_1 + 0x218);
  uVar1 = (ulong)local_60 >> 0x20;
  local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
  if (lVar5 == 0) {
    uVar12 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uVar8 = 0;
    uVar11 = 0;
    uVar13 = 0;
    uVar14 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0x220);
    uVar6 = *(undefined8 *)(lVar5 + 0x238);
    uVar8 = *(undefined8 *)(lVar5 + 600);
    uVar9 = *(undefined8 *)(lVar5 + 0x240);
    uVar11 = *(undefined8 *)(lVar5 + 0x248);
    uVar10 = *(undefined8 *)(lVar5 + 0x250);
    uVar13 = *(undefined8 *)(lVar5 + 0x260);
    uVar12 = *(undefined8 *)(lVar5 + 0x268);
    local_60 = (undefined *)CONCAT44((int)uVar1,10);
    uVar14 = *(undefined8 *)(lVar5 + 0x270);
  }
  FUN_0344d350(uVar4,&local_70);
  FUN_0344d350(uVar6,&local_70);
  FUN_0344d350(uVar8,&local_70);
  FUN_0344d350(uVar9,&local_70);
  FUN_0344d350(uVar11,&local_70);
  FUN_0344d350(uVar10,&local_70);
  FUN_0344d350(uVar13,&local_70);
  FUN_0344d350(uVar12,&local_70);
  FUN_0344d350(uVar14,&local_70);
  return;
}

