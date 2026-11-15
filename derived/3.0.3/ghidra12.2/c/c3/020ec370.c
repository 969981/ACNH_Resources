
void FUN_020ec370(byte param_1,char param_2,long *param_3,undefined2 param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  uint uVar10;
  int *piVar11;
  byte local_48;
  char local_47;
  undefined2 local_46;
  undefined2 local_44;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  lVar7 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_3 + 0x18))(param_3);
  local_28 = FUN_006bd550(param_3[1],0);
  puVar6 = (uint *)FUN_020f3140(lVar7 + 0x220,&local_28);
  puVar5 = PTR_DAT_04bb6360;
  puVar4 = PTR_DAT_04bb6358;
  if (puVar6 != (uint *)0x0) {
    uVar10 = *puVar6;
    if (uVar10 != 0) {
      cVar8 = *PTR_DAT_04bb6358;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar10 = *puVar6;
        }
        else {
          uVar2 = *(uint *)puVar5;
          if (-1 < (int)uVar2) {
            if ((ushort *)((ulong)uVar2 + (long)puVar6) != (ushort *)0x0) {
              uVar10 = (uint)*(ushort *)((ulong)uVar2 + (long)puVar6);
              goto LAB_020ec4d0;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar3 = (uint *)(ulong)uVar10;
        uVar10 = 0;
        if ((puVar3 == (uint *)0x0) || (uVar10 = 0, puVar6 == puVar3)) goto LAB_020ec4d0;
        lVar7 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar3)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar6 + (lVar7 - (long)puVar3);
        uVar10 = 0;
        if (lVar7 == 0) goto LAB_020ec4d0;
        uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar3));
        *(undefined4 *)puVar5 = 0xfffffffe;
        if (uVar9 == 0) break;
        piVar11 = (int *)(lVar7 + 4);
        while (piVar11[-1] != 0x54706054) {
          piVar11 = piVar11 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_020ec4cc;
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)puVar5 = iVar1;
        uVar10 = *puVar6;
        if (uVar10 == 0) break;
      } while( true );
    }
LAB_020ec4cc:
    uVar10 = 0;
LAB_020ec4d0:
    local_46 = (undefined2)uVar10;
    if (((param_1 < 10) && (-1 < param_2)) && (uVar10 >> 0xf == 0)) {
      local_28 = 0;
      local_22 = 0;
      local_24 = 0xff00;
      if (-1 < DAT_053d1400) {
        local_48 = param_1;
        local_47 = param_2;
        local_44 = param_4;
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1400,&local_28,&local_48,6,0);
      }
    }
  }
  return;
}

