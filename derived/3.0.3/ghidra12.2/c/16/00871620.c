
undefined1 FUN_00871620(uint *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  undefined *__s;
  ulong uVar6;
  uint *puVar7;
  int *piVar8;
  char cVar9;
  char local_48;
  
  __s = PTR_DAT_04bb3250;
  puVar5 = PTR_DAT_04bb3248;
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar3 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
  if (1 < uVar3) {
    uVar3 = 0;
  }
  local_48 = (char)uVar3;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    puVar7 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar7 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar7 >> 0x19 & 1) != 0) {
      uVar3 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65700);
      if (1 < uVar3) {
        uVar3 = 0;
      }
      local_48 = (char)uVar3;
    }
  }
  if (local_48 == '\x01') {
    if (*param_1 != 0) {
      cVar9 = *PTR_DAT_04bb3248;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *puVar5 = 1;
          memset(__s,0xff,0x288);
        }
        else {
          uVar3 = *(uint *)(__s + 0x24c);
          uVar6 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_0087198c;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar7) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
        *(undefined4 *)(__s + 0x24c) = 0xfffffffe;
        if (uVar6 == 0) {
          return 0;
        }
        piVar8 = (int *)(lVar2 + 4);
        while (piVar8[-1] != -0x728bec5) {
          piVar8 = piVar8 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar8 != -1) {
          iVar1 = *piVar8;
        }
        *(int *)(__s + 0x24c) = iVar1;
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  else if (local_48 == '\0') {
    if (*param_1 != 0) {
      cVar9 = *PTR_DAT_04bb3248;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *puVar5 = 1;
          memset(__s,0xff,0x288);
        }
        else {
          uVar3 = *(uint *)(__s + 0x248);
          uVar6 = (ulong)uVar3;
          if (-1 < (int)uVar3) {
LAB_0087198c:
            if ((undefined1 *)(uVar6 + (long)param_1) == (undefined1 *)0x0) {
              return 0;
            }
            return *(undefined1 *)(uVar6 + (long)param_1);
          }
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar7) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
        *(undefined4 *)(__s + 0x248) = 0xfffffffe;
        if (uVar6 == 0) {
          return 0;
        }
        piVar8 = (int *)(lVar2 + 4);
        while (piVar8[-1] != 0x26c5579) {
          piVar8 = piVar8 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar8 != -1) {
          iVar1 = *piVar8;
        }
        *(int *)(__s + 0x248) = iVar1;
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  else if (*param_1 != 0) {
    cVar9 = *PTR_DAT_04bb3248;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *puVar5 = 1;
        memset(__s,0xff,0x288);
      }
      else {
        uVar3 = *(uint *)(__s + 0x248);
        uVar6 = (ulong)uVar3;
        if (-1 < (int)uVar3) goto LAB_0087198c;
        if (uVar3 != 0xffffffff) {
          return 0;
        }
      }
      puVar7 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) {
        return 0;
      }
      if (param_1 == puVar7) {
        return 0;
      }
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar7);
      if (lVar2 == 0) {
        return 0;
      }
      uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
      *(undefined4 *)(__s + 0x248) = 0xfffffffe;
      if (uVar6 == 0) {
        return 0;
      }
      piVar8 = (int *)(lVar2 + 4);
      while (piVar8[-1] != 0x26c5579) {
        piVar8 = piVar8 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return 0;
        }
      }
      iVar1 = 0;
      if (*piVar8 != -1) {
        iVar1 = *piVar8;
      }
      *(int *)(__s + 0x248) = iVar1;
      if (*param_1 == 0) {
        return 0;
      }
    } while( true );
  }
  return 0;
}

