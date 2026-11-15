
void FUN_02129c08(undefined8 param_1,long param_2,uint *param_3)

{
  uint uVar1;
  undefined *puVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  sVar7 = *(short *)PTR_DAT_04bb6298;
  if (sVar7 != -1) {
    local_58 = CONCAT44(local_58._4_4_,0x20);
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
    if (0xff < (uint)(int)sVar7) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) != 0) {
      return;
    }
  }
  iVar8 = FUN_027512f0(*(long *)PTR_DAT_04bb2208 + 0x1740,param_1);
  if (iVar8 < 0) {
    iVar8 = -1;
  }
  lVar13 = **(long **)PTR_DAT_04bb27d0;
  bVar6 = *(byte *)(lVar13 + 0x473);
  if ((long)(char)bVar6 != 0xffffffffffffffff) {
    pbVar3 = (byte *)(lVar13 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
    if (7 < bVar6) {
      pbVar3 = (byte *)(lVar13 + 0x48);
    }
    if (((*pbVar3 >> 3 & 1) != 0) && (*(byte *)(lVar13 + 0x472) != bVar6)) {
      return;
    }
  }
  if (DAT_05574040 == 0) {
    return;
  }
  lVar13 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
  if (lVar13 == 0) {
    return;
  }
  lVar14 = *(long *)(lVar13 + 0x276cd8);
  if (lVar14 == 0) {
    uVar10 = 0;
  }
  else {
    if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
      uVar10 = 0;
      plVar11 = *(long **)(lVar14 + 0x20);
    }
    else {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      uVar10 = uVar10 & 0xffffffff;
      if (*(long *)(lVar13 + 0x276cd8) == 0) goto LAB_02129d84;
      plVar11 = *(long **)(*(long *)(lVar13 + 0x276cd8) + 0x20);
    }
    if (plVar11 != (long *)0x0) {
      local_58 = *(long *)(lVar13 + 0x276cb8);
      local_50 = *(undefined8 *)(lVar13 + 0x276cc0);
      uStack_48 = 0x3fd140;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_58);
    }
  }
LAB_02129d84:
  uVar5 = *param_3;
  if (uVar5 < 8) {
    lVar14 = *(long *)(lVar13 + 0x276cb8);
    lVar4 = *(long *)(lVar13 + 0x276cc0);
    uVar9 = FUN_02751410(param_1);
    uVar1 = (int)(SUB168(SEXT816(param_2) * ZEXT816(0x8888888888888889),8) >> 5) -
            (SUB164(SEXT816(param_2) * ZEXT816(0x8888888888888889),0xc) >> 0x1f);
    if ((int)uVar1 <= (int)uVar9) {
      uVar9 = uVar1;
    }
    FUN_02750d70(lVar4 + lVar14 + (ulong)uVar5 * 0xd8 + 0x3c52f8,(int)(short)iVar8,uVar9 & 0xffff);
  }
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar13 + 0x276cd8) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar13 + 0x276cd8) + 0x18), puVar12 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar12)();
  }
  return;
}

