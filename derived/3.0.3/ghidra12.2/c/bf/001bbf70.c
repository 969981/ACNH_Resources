
void FUN_001bbf70(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined1 auStack_f0 [144];
  
  plVar10 = (long *)(param_1 + 0x38);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  iVar4 = DAT_0410b4f0;
  lVar14 = *(long *)(param_1 + 8);
  if (lVar14 != *(long *)(param_1 + 0x10)) {
LAB_001bc044:
    do {
      lVar11 = *(long *)(lVar14 + 8);
      if (*(char *)(lVar11 + 0x380) == '\0' && *(int *)(lVar11 + 0xc0) == 0) {
        FUN_001e1500(auStack_f0);
        *(undefined8 *)(lVar11 + 0x278) = 0;
        *(undefined8 *)(lVar11 + 0x288) = 0;
        plVar1 = (long *)(lVar11 + 0x410);
        *(undefined2 *)(lVar11 + 0x291) = 0;
        *(byte *)(lVar11 + 0x290) = *(byte *)(lVar11 + 0x290) & 4;
        (**(code **)(*(long *)(lVar11 + 0x410) + 0x10))(plVar1);
        if (*(long *)(lVar11 + 0x3b8) == 0) {
          (**(code **)(*plVar1 + 0x20))(plVar1);
          FUN_001e1868(auStack_f0);
        }
        else {
          puVar15 = *(undefined8 **)(*(long *)(lVar11 + 0x390) + *(long *)(lVar11 + 0x3b0) * 8);
          FUN_00196f20(*puVar15,lVar11 + 0x260);
          FUN_001e15a8(auStack_f0,puVar15 + 1);
          lVar6 = *(long *)(lVar11 + 0x3b0);
          *(undefined8 *)(*(long *)(lVar11 + 0x390) + lVar6 * 8) = 0;
          uVar2 = lVar6 + 1;
          uVar8 = *(ulong *)(lVar11 + 0x3c0);
          uVar3 = 0;
          if (uVar8 != 0) {
            uVar3 = uVar2 / uVar8;
          }
          *(ulong *)(lVar11 + 0x3b0) = uVar2 - uVar3 * uVar8;
          *(long *)(lVar11 + 0x3b8) = *(long *)(lVar11 + 0x3b8) + -1;
          plVar12 = (long *)*puVar15;
          if (plVar12 != (long *)0x0) {
            plVar16 = *(long **)(lVar11 + 0x460);
            if (plVar16 == (long *)0x0) {
              pcVar7 = *(code **)(*plVar12 + 8);
            }
            else {
              plVar13 = plVar16 + 1;
              (**(code **)(*plVar13 + 0x10))(plVar13);
              lVar6 = *plVar16;
              lVar9 = *(long *)(lVar6 + 0x20);
              *(long **)(*(long *)(lVar6 + 8) + lVar9 * 8) = plVar12;
              uVar2 = lVar9 + 1;
              uVar3 = *(ulong *)(lVar6 + 0x38);
              uVar8 = 0;
              if (uVar3 != 0) {
                uVar8 = uVar2 / uVar3;
              }
              *(ulong *)(lVar6 + 0x20) = uVar2 - uVar8 * uVar3;
              *(long *)(lVar6 + 0x30) = *(long *)(lVar6 + 0x30) + 1;
              pcVar7 = *(code **)(*plVar13 + 0x20);
              plVar12 = plVar13;
            }
            (*pcVar7)(plVar12);
          }
          lVar6 = *(long *)(lVar11 + 1000);
          *(undefined8 **)(*(long *)(lVar11 + 0x3d0) + lVar6 * 8) = puVar15;
          uVar2 = lVar6 + 1;
          uVar8 = *(ulong *)(lVar11 + 0x400);
          uVar3 = 0;
          if (uVar8 != 0) {
            uVar3 = uVar2 / uVar8;
          }
          *(ulong *)(lVar11 + 1000) = uVar2 - uVar3 * uVar8;
          *(long *)(lVar11 + 0x3f8) = *(long *)(lVar11 + 0x3f8) + 1;
          *(bool *)(lVar11 + 0x380) = *(long *)(lVar11 + 0x3b8) == 0;
          *(undefined1 *)(lVar11 + 0x381) = 0;
          (**(code **)(*(long *)(lVar11 + 0x410) + 0x20))(plVar1);
          iVar5 = FUN_001e7008(lVar11,lVar11 + 0x260,auStack_f0);
          FUN_001e1868(auStack_f0);
          if (iVar5 == iVar4) goto LAB_001bc044;
        }
      }
      lVar14 = lVar14 + 0x10;
    } while (lVar14 != *(long *)(param_1 + 0x10));
  }
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return;
}

