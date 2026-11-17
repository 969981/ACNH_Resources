
void FUN_02c7b960(long param_1,long *param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *__s;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  byte bVar10;
  undefined8 uVar11;
  long lVar12;
  undefined **local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 auStack_48 [8];
  
  __s = (void *)(**(code **)(*param_2 + 0x18))(param_2);
  memset(__s,0,0x754);
  pbVar1 = (byte *)(param_1 + 0x1f8);
  if ((((*(byte *)(param_1 + 0x1f8) < 8) && (uVar4 = FUN_02582d8c(pbVar1,1), uVar4 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')) {
    bVar10 = *pbVar1;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    local_80 = (undefined **)CONCAT71(local_80._1_7_,bVar10);
    lVar7 = FUN_02583354(DAT_055021a0,&local_80,1);
    if (lVar7 != 0) {
      lVar12 = lVar7 + 0x194b0;
      if (*(long *)(lVar7 + 0x194b8) == 0) {
        lVar12 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar12 + 0x1090) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar12 + 0x1090), puVar8 == (undefined8 *)0x0)) {
        memcpy(param_2 + 1,(void *)(*(long *)(lVar12 + 0x1078) + *(long *)(lVar12 + 0x1070)),0x754);
      }
      else {
        uVar9 = (**(code **)*puVar8)();
        memcpy(param_2 + 1,(void *)(*(long *)(lVar12 + 0x1078) + *(long *)(lVar12 + 0x1070)),0x754);
        if ((((uVar9 & 1) != 0) && (*(long *)(lVar12 + 0x1090) != 0)) &&
           (puVar8 = *(undefined8 **)(*(long *)(lVar12 + 0x1090) + 8), puVar8 != (undefined8 *)0x0))
        {
          (**(code **)*puVar8)();
        }
      }
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0x97d10);
  local_80 = &PTR_LAB_048f9770;
  pcStack_78 = "UnlockInterior_CeilingFurniture";
  iVar5 = FUN_0274bce0(pbVar1,&local_80);
  puVar3 = PTR_DAT_04bb43c0;
  local_68 = iVar5 != 0;
  uVar4 = 0;
  pcStack_78 = PTR_DAT_04bc5a80 + 0x10;
  local_80 = &PTR_FUN_04ab2dd8;
  local_70 = uVar11;
  do {
    (**(code **)(*param_2 + 0x10))(auStack_48,param_2,uVar4);
    lVar7 = (**(code **)(*param_2 + 0x20))(param_2);
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar7 + (ulong)(uVar4 >> 5) * 4) & uVar2) != 0) {
      lVar7 = *(long *)puVar3;
      uVar6 = FUN_0277d6c4(auStack_48);
      if (*(long *)puVar3 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if (((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
           (uVar9 = (*(code *)*local_80)(&local_80,auStack_48), (uVar9 & 1) == 0))
        goto LAB_02c7bb60;
      }
      lVar7 = (**(code **)(*param_2 + 0x18))(param_2);
      lVar12 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar7 + lVar12) = *(uint *)(lVar7 + lVar12) & (uVar2 ^ 0xffffffff);
    }
LAB_02c7bb60:
    uVar4 = uVar4 + 1;
    if (uVar4 == 15000) {
      return;
    }
  } while( true );
}

