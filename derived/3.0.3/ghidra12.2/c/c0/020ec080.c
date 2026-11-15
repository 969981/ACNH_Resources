
void FUN_020ec080(byte param_1,byte *param_2,long *param_3,undefined2 param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  long lVar8;
  char cVar9;
  ulong uVar10;
  uint uVar11;
  int *piVar12;
  byte local_48;
  byte local_47;
  undefined2 local_46;
  undefined2 local_44;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  lVar8 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_3 + 0x18))(param_3);
  local_28 = FUN_006bd550(param_3[1],0);
  puVar7 = (uint *)FUN_020f3140(lVar8 + 0x220,&local_28);
  puVar6 = PTR_DAT_04bb6360;
  puVar5 = PTR_DAT_04bb6358;
  if (puVar7 != (uint *)0x0) {
    uVar11 = *puVar7;
    if (uVar11 != 0) {
      cVar9 = *PTR_DAT_04bb6358;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          uVar11 = *puVar7;
        }
        else {
          uVar2 = *(uint *)puVar6;
          if (-1 < (int)uVar2) {
            if ((ushort *)((ulong)uVar2 + (long)puVar7) != (ushort *)0x0) {
              uVar11 = (uint)*(ushort *)((ulong)uVar2 + (long)puVar7);
              goto LAB_020ec1e0;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar4 = (uint *)(ulong)uVar11;
        uVar11 = 0;
        if ((puVar4 == (uint *)0x0) || (uVar11 = 0, puVar7 == puVar4)) goto LAB_020ec1e0;
        lVar8 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar4)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar7 + (lVar8 - (long)puVar4);
        uVar11 = 0;
        if (lVar8 == 0) goto LAB_020ec1e0;
        uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar4));
        *(undefined4 *)puVar6 = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar12 = (int *)(lVar8 + 4);
        while (piVar12[-1] != 0x54706054) {
          piVar12 = piVar12 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_020ec1dc;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)puVar6 = iVar1;
        uVar11 = *puVar7;
        if (uVar11 == 0) break;
      } while( true );
    }
LAB_020ec1dc:
    uVar11 = 0;
LAB_020ec1e0:
    bVar3 = *param_2;
    local_46 = (undefined2)uVar11;
    local_47 = bVar3;
    if (7 < bVar3) {
      local_47 = 0xff;
    }
    if (((uVar11 >> 0xf == 0) && (param_1 < 10)) && (bVar3 < 8)) {
      local_28 = 0;
      local_22 = 0;
      local_24 = 0xff00;
      if (-1 < DAT_053d0aa0) {
        local_48 = param_1;
        local_44 = param_4;
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0aa0,&local_28,&local_48,6,0);
      }
    }
  }
  return;
}

