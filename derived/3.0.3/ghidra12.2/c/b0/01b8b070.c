
void FUN_01b8b070(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  char cVar7;
  undefined2 uVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  long lVar12;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_24;
  
  lVar6 = *(long *)PTR_DAT_04bb4788;
  (**(code **)(*param_2 + 0x18))();
  lVar12 = param_2[1];
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_0071b954(&local_98,"%s-%s",lVar12,param_3[1]);
  (**(code **)(CONCAT44(uStack_94,local_98) + 0x18))(&local_98);
  local_24 = FUN_006bd550(local_90,0);
  puVar5 = (uint *)FUN_01b8c450(lVar6 + 0x600,&local_24);
  if (puVar5 == (uint *)0x0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    local_98 = FUN_006bd550(param_2[1],0);
    puVar5 = (uint *)FUN_01b8c450(lVar6 + 0x600,&local_98);
    if (puVar5 == (uint *)0x0) {
      uVar8 = 0;
      goto LAB_01b8b23c;
    }
  }
  puVar4 = PTR_DAT_04bc06b8;
  puVar3 = PTR_DAT_04bc06b0;
  if (*puVar5 != 0) {
    cVar7 = *PTR_DAT_04bc06b0;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar4 + 0x30) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar2 = *(uint *)(puVar4 + 4);
        if (-1 < (int)uVar2) {
          if ((undefined2 *)((ulong)uVar2 + (long)puVar5) == (undefined2 *)0x0) break;
          uVar8 = *(undefined2 *)((ulong)uVar2 + (long)puVar5);
          goto LAB_01b8b23c;
        }
        if (uVar2 != 0xffffffff) break;
      }
      puVar10 = (uint *)(ulong)*puVar5;
      uVar8 = 0xffff;
      if ((*puVar5 == 0) || (puVar5 == puVar10)) goto LAB_01b8b23c;
      lVar6 = 0xc;
      if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar5 + (lVar6 - (long)puVar10);
      if (lVar6 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
      *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
      if (uVar9 == 0) break;
      piVar11 = (int *)(lVar6 + 4);
      while (piVar11[-1] != -0x1b797fa4) {
        piVar11 = piVar11 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_01b8b238;
      }
      iVar1 = 0;
      if (*piVar11 != -1) {
        iVar1 = *piVar11;
      }
      *(int *)(puVar4 + 4) = iVar1;
      uVar8 = 0xffff;
      if (*puVar5 == 0) goto LAB_01b8b23c;
    } while( true );
  }
LAB_01b8b238:
  uVar8 = 0xffff;
LAB_01b8b23c:
  puVar3 = PTR_DAT_04bc06f0;
  *(undefined2 *)(param_1 + 1) = uVar8;
  *param_1 = (long)(puVar3 + 0x10);
  return;
}

