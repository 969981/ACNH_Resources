
void FUN_02953b40(long param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  undefined *puVar6;
  uint *puVar7;
  int iVar8;
  char cVar9;
  
  if (param_2 != 0) {
    if ((int)*(uint *)(param_1 + 0xd18) < 1) {
      if (*(long *)(param_1 + 0xc08) == 0) {
        return;
      }
      puVar7 = *(uint **)(*(long *)(param_1 + 0xc08) + 8);
      if (puVar7 == (uint *)0x0) {
        return;
      }
      if ((param_3 < *(uint *)(param_1 + 0xc20)) &&
         (*(char *)(*(long *)(param_1 + 0xc28) + (long)(int)param_3) == '\0')) {
        return;
      }
      if (*puVar7 <= param_3) {
        return;
      }
      if (puVar7[1] == 0) {
        return;
      }
      if ((ushort)puVar7[2] == 0) {
        return;
      }
      iVar8 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      puVar7 = (uint *)((ulong)(puVar7[1] * param_3 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                       (long)puVar7);
    }
    else {
      if (*(uint *)(param_1 + 0xd18) <= param_3) {
        return;
      }
      if (*(uint *)(param_1 + 0xd08) <= param_3) {
        param_3 = 0;
      }
      puVar7 = *(uint **)(*(long *)(param_1 + 0xd10) + (ulong)param_3 * 8);
    }
    if (puVar7 != (uint *)0x0) {
      uVar3 = *puVar7;
      if (uVar3 == 0) {
LAB_02953c54:
        puVar6 = (undefined *)0x0;
LAB_02953c58:
        puVar2 = PTR_DAT_04c487f0;
        if (puVar6 != (undefined *)0x0) {
          puVar2 = puVar6;
        }
        FUN_038d1270(param_2,&DAT_0409e973,puVar2);
        return;
      }
      cVar9 = DAT_055d6918;
      do {
        if (cVar9 == '\0') {
          DAT_055d691c = 0xffffffffffffffff;
          cVar9 = '\x01';
          DAT_055d6924 = 0xffffffff;
          uVar3 = *puVar7;
          DAT_055d6918 = '\x01';
        }
        else {
          if (-1 < (int)DAT_055d6924) {
            puVar6 = (undefined *)((ulong)DAT_055d6924 + (long)puVar7);
            goto LAB_02953c58;
          }
          if (DAT_055d6924 != 0xffffffff) goto LAB_02953c54;
        }
        puVar5 = (uint *)(ulong)uVar3;
        puVar6 = (undefined *)0x0;
        if ((puVar5 == (uint *)0x0) || (puVar6 = (undefined *)0x0, puVar7 == puVar5))
        goto LAB_02953c58;
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar5)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + (lVar1 - (long)puVar5);
        puVar6 = (undefined *)0x0;
        if (lVar1 == 0) goto LAB_02953c58;
        uVar4 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar5));
        DAT_055d6924 = 0xfffffffe;
        if (uVar4 == 0) goto LAB_02953c54;
        puVar5 = (uint *)(lVar1 + 4);
        while (puVar5[-1] != 0xfad4ff78) {
          puVar5 = puVar5 + 2;
          uVar4 = uVar4 - 1;
          if (uVar4 == 0) goto LAB_02953c54;
        }
        DAT_055d6924 = 0;
        if (*puVar5 != 0xffffffff) {
          DAT_055d6924 = *puVar5;
        }
        uVar3 = *puVar7;
        if (uVar3 == 0) goto LAB_02953c54;
      } while( true );
    }
  }
  return;
}

