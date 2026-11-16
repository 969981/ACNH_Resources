
void FUN_025adde0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  byte local_a8 [56];
  undefined *local_70;
  char *local_68;
  
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_a8[0] = *(byte *)(param_1 + 0x18);
    lVar2 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_a8,1);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == -1) {
      return;
    }
    if (*(long *)PTR_DAT_04bb46b0 == 0) {
      return;
    }
    lVar2 = FUN_026eec4c();
  }
  if (lVar2 == 0) {
    return;
  }
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "ChangeStickCoordinate";
  if ((*(long **)(lVar2 + 0x3eb8) == (long *)0x0) ||
     (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x3eb8), puVar3 == (undefined8 *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)*puVar3)();
    uVar4 = uVar4 & 0xffffffff;
  }
  puVar1 = PTR_DAT_04bb2268;
  lVar6 = *(long *)PTR_DAT_04bb2268;
  if (lVar6 == 0) goto LAB_025ae26c;
  if (((*(char *)(lVar6 + 0xb1) == '\0') && (*(long *)(param_1 + 8) != 0)) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 8) + 8), lVar5 != 0)) {
    lVar10 = *(long *)(lVar2 + 0x3e98);
    lVar6 = *(long *)(lVar2 + 0x3ea0);
    lVar9 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar9 != 0) && (uVar7 = (ulong)*(uint *)(lVar5 + 0x20), 0 < (int)*(uint *)(lVar5 + 0x20)))
    {
      plVar8 = *(long **)(lVar5 + 0x28);
      do {
        if (*plVar8 == 0) {
          lVar6 = lVar6 + lVar10;
          *plVar8 = lVar9;
          FUN_02603350(lVar9,lVar6);
          FUN_006d8678(local_a8,"%s[%d].","ChangeStickCoordinate",0);
          FUN_02603d40(param_1,lVar6,local_a8);
          lVar5 = *(long *)(param_1 + 0x40);
          lVar6 = nn::prepo::Array::GetBuffer();
          if (lVar6 != 0) {
            nn::prepo::Array::Add((Struct *)(lVar5 + 8));
          }
          lVar6 = *(long *)puVar1;
          if (lVar6 == 0) goto LAB_025ae26c;
          goto LAB_025adeb8;
        }
        plVar8 = plVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    lVar6 = *(long *)puVar1;
    *(undefined1 *)(lVar6 + 0xb1) = 1;
LAB_025adec0:
    if (((*(char *)(lVar6 + 0xb1) != '\0') || (*(long *)(param_1 + 8) == 0)) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 8), lVar5 == 0)) goto LAB_025adec8;
    lVar9 = *(long *)(lVar2 + 0x3e98);
    lVar10 = *(long *)(lVar2 + 0x3ea0);
    lVar6 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar6 != 0) && (uVar7 = (ulong)*(uint *)(lVar5 + 0x20), 0 < (int)*(uint *)(lVar5 + 0x20)))
    {
      plVar8 = *(long **)(lVar5 + 0x28);
      do {
        if (*plVar8 == 0) {
          *plVar8 = lVar6;
          lVar5 = lVar10 + lVar9 + 0x23f0;
          FUN_02603350(lVar6,lVar5);
          FUN_006d8678(local_a8,"%s[%d].","ChangeStickCoordinate",2);
          FUN_02603d40(param_1,lVar5,local_a8);
          lVar5 = *(long *)(param_1 + 0x40);
          lVar6 = nn::prepo::Array::GetBuffer();
          if (lVar6 != 0) {
            nn::prepo::Array::Add((Struct *)(lVar5 + 8));
          }
          lVar6 = *(long *)puVar1;
          if (lVar6 == 0) goto LAB_025ae26c;
          goto LAB_025adec8;
        }
        plVar8 = plVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    lVar6 = *(long *)puVar1;
    *(undefined1 *)(lVar6 + 0xb1) = 1;
LAB_025aded0:
    if (((*(char *)(lVar6 + 0xb1) != '\0') || (*(long *)(param_1 + 8) == 0)) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 8), lVar5 == 0)) goto LAB_025aded8;
    lVar9 = *(long *)(lVar2 + 0x3e98);
    lVar10 = *(long *)(lVar2 + 0x3ea0);
    lVar6 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar6 != 0) && (uVar7 = (ulong)*(uint *)(lVar5 + 0x20), 0 < (int)*(uint *)(lVar5 + 0x20)))
    {
      plVar8 = *(long **)(lVar5 + 0x28);
      do {
        if (*plVar8 == 0) {
          *plVar8 = lVar6;
          lVar5 = lVar10 + lVar9 + 0x47e0;
          FUN_02603350(lVar6,lVar5);
          FUN_006d8678(local_a8,"%s[%d].",local_68,4);
          FUN_02603d40(param_1,lVar5,local_a8);
          lVar5 = *(long *)(param_1 + 0x40);
          lVar6 = nn::prepo::Array::GetBuffer();
          if (lVar6 != 0) {
            nn::prepo::Array::Add((Struct *)(lVar5 + 8));
          }
          lVar6 = *(long *)puVar1;
          if (lVar6 == 0) goto LAB_025ae26c;
          goto LAB_025aded8;
        }
        plVar8 = plVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    lVar6 = *(long *)puVar1;
    *(undefined1 *)(lVar6 + 0xb1) = 1;
LAB_025adee0:
    if (((*(char *)(lVar6 + 0xb1) != '\0') || (*(long *)(param_1 + 8) == 0)) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 8), lVar5 == 0)) goto LAB_025adee8;
    lVar9 = *(long *)(lVar2 + 0x3e98);
    lVar10 = *(long *)(lVar2 + 0x3ea0);
    lVar6 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar6 != 0) && (uVar7 = (ulong)*(uint *)(lVar5 + 0x20), 0 < (int)*(uint *)(lVar5 + 0x20)))
    {
      plVar8 = *(long **)(lVar5 + 0x28);
      do {
        if (*plVar8 == 0) {
          *plVar8 = lVar6;
          lVar5 = lVar10 + lVar9 + 0x6bd0;
          FUN_02603350(lVar6,lVar5);
          (**(code **)(local_70 + 0x18))(&local_70);
          FUN_006d8678(local_a8,"%s[%d].",local_68,6);
          FUN_02603d40(param_1,lVar5,local_a8);
          lVar5 = *(long *)(param_1 + 0x40);
          lVar6 = nn::prepo::Array::GetBuffer();
          if (lVar6 != 0) {
            nn::prepo::Array::Add((Struct *)(lVar5 + 8));
          }
          lVar6 = *(long *)puVar1;
          if (lVar6 == 0) goto LAB_025ae26c;
          goto LAB_025adee8;
        }
        plVar8 = plVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  else {
LAB_025adeb8:
    if (((*(char *)(lVar6 + 0xb1) != '\0') || (*(long *)(param_1 + 8) == 0)) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 8), lVar5 == 0)) goto LAB_025adec0;
    lVar9 = *(long *)(lVar2 + 0x3e98);
    lVar10 = *(long *)(lVar2 + 0x3ea0);
    lVar6 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar6 != 0) && (uVar7 = (ulong)*(uint *)(lVar5 + 0x20), 0 < (int)*(uint *)(lVar5 + 0x20)))
    {
      plVar8 = *(long **)(lVar5 + 0x28);
      do {
        if (*plVar8 == 0) {
          *plVar8 = lVar6;
          lVar5 = lVar10 + lVar9 + 0x11f8;
          FUN_02603350(lVar6,lVar5);
          FUN_006d8678(local_a8,"%s[%d].","ChangeStickCoordinate",1);
          FUN_02603d40(param_1,lVar5,local_a8);
          lVar5 = *(long *)(param_1 + 0x40);
          lVar6 = nn::prepo::Array::GetBuffer();
          if (lVar6 != 0) {
            nn::prepo::Array::Add((Struct *)(lVar5 + 8));
          }
          lVar6 = *(long *)puVar1;
          if (lVar6 == 0) goto LAB_025ae26c;
          goto LAB_025adec0;
        }
        plVar8 = plVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    lVar6 = *(long *)puVar1;
    *(undefined1 *)(lVar6 + 0xb1) = 1;
LAB_025adec8:
    if (((*(char *)(lVar6 + 0xb1) != '\0') || (*(long *)(param_1 + 8) == 0)) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 8), lVar5 == 0)) goto LAB_025aded0;
    lVar9 = *(long *)(lVar2 + 0x3e98);
    lVar10 = *(long *)(lVar2 + 0x3ea0);
    lVar6 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar6 != 0) && (uVar7 = (ulong)*(uint *)(lVar5 + 0x20), 0 < (int)*(uint *)(lVar5 + 0x20)))
    {
      plVar8 = *(long **)(lVar5 + 0x28);
      do {
        if (*plVar8 == 0) {
          *plVar8 = lVar6;
          lVar5 = lVar10 + lVar9 + 0x35e8;
          FUN_02603350(lVar6,lVar5);
          FUN_006d8678(local_a8,"%s[%d].","ChangeStickCoordinate",3);
          FUN_02603d40(param_1,lVar5,local_a8);
          lVar5 = *(long *)(param_1 + 0x40);
          lVar6 = nn::prepo::Array::GetBuffer();
          if (lVar6 != 0) {
            nn::prepo::Array::Add((Struct *)(lVar5 + 8));
          }
          lVar6 = *(long *)puVar1;
          if (lVar6 == 0) goto LAB_025ae26c;
          goto LAB_025aded0;
        }
        plVar8 = plVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    lVar6 = *(long *)puVar1;
    *(undefined1 *)(lVar6 + 0xb1) = 1;
LAB_025aded8:
    if (((*(char *)(lVar6 + 0xb1) != '\0') || (*(long *)(param_1 + 8) == 0)) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 8), lVar5 == 0)) goto LAB_025adee0;
    lVar9 = *(long *)(lVar2 + 0x3e98);
    lVar10 = *(long *)(lVar2 + 0x3ea0);
    lVar6 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar6 != 0) && (uVar7 = (ulong)*(uint *)(lVar5 + 0x20), 0 < (int)*(uint *)(lVar5 + 0x20)))
    {
      plVar8 = *(long **)(lVar5 + 0x28);
      do {
        if (*plVar8 == 0) {
          *plVar8 = lVar6;
          lVar5 = lVar10 + lVar9 + 23000;
          FUN_02603350(lVar6,lVar5);
          (**(code **)(local_70 + 0x18))(&local_70);
          FUN_006d8678(local_a8,"%s[%d].",local_68,5);
          FUN_02603d40(param_1,lVar5,local_a8);
          lVar5 = *(long *)(param_1 + 0x40);
          lVar6 = nn::prepo::Array::GetBuffer();
          if (lVar6 != 0) {
            nn::prepo::Array::Add((Struct *)(lVar5 + 8));
          }
          lVar6 = *(long *)puVar1;
          if (lVar6 == 0) goto LAB_025ae26c;
          goto LAB_025adee0;
        }
        plVar8 = plVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    lVar6 = *(long *)puVar1;
    *(undefined1 *)(lVar6 + 0xb1) = 1;
LAB_025adee8:
    if (((*(char *)(lVar6 + 0xb1) != '\0') || (*(long *)(param_1 + 8) == 0)) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 8), lVar6 == 0)) goto LAB_025ae26c;
    lVar9 = *(long *)(lVar2 + 0x3e98);
    lVar10 = *(long *)(lVar2 + 0x3ea0);
    lVar5 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar5 != 0) && (uVar7 = (ulong)*(uint *)(lVar6 + 0x20), 0 < (int)*(uint *)(lVar6 + 0x20)))
    {
      plVar8 = *(long **)(lVar6 + 0x28);
      do {
        if (*plVar8 == 0) {
          *plVar8 = lVar5;
          lVar6 = lVar10 + lVar9 + 0x7dc8;
          FUN_02603350(lVar5,lVar6);
          (**(code **)(local_70 + 0x18))(&local_70);
          FUN_006d8678(local_a8,"%s[%d].",local_68,7);
          FUN_02603d40(param_1,lVar6,local_a8);
          lVar5 = *(long *)(param_1 + 0x40);
          lVar6 = nn::prepo::Array::GetBuffer();
          if (lVar6 != 0) {
            nn::prepo::Array::Add((Struct *)(lVar5 + 8));
          }
          goto LAB_025ae26c;
        }
        plVar8 = plVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  *(undefined1 *)(*(long *)puVar1 + 0xb1) = 1;
LAB_025ae26c:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605b30(*(long *)(param_1 + 8),&local_70,*(undefined8 *)(param_1 + 0x40));
  }
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0x3eb8) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x3eb8) + 8), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  return;
}

