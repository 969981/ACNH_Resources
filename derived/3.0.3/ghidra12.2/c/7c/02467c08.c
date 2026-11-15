
undefined8 FUN_02467c08(long param_1,int param_2,ulong param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  uint *puVar8;
  uint local_24;
  
  if ((param_3 & 1) == 0) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f0960);
        puVar8 = (uint *)&DAT_054f0958;
        if (iVar3 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar8 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar8 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar8 = (uint *)(DAT_054f5738 + 0x204) + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
      }
    }
    if ((*puVar8 >> 0x19 & 1) == 0) {
      if ((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
        pbVar1 = PTR_DAT_04bb32e0;
        if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
          pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
        }
        bVar6 = *(byte *)(param_1 + 0x1ee8);
        bVar7 = *pbVar1;
        if (7 < bVar7) {
          bVar7 = 0xff;
        }
        if (7 < bVar6) {
          bVar6 = 0xff;
        }
        if ((bVar7 != bVar6) && ((*(byte *)(*(long *)PTR_DAT_04bb2230 + 0x3f0) & 1) != 0)) {
          return 0;
        }
      }
      if (*(char *)(param_1 + 0x17ac) == '\0') {
        if (((*(uint *)(param_1 + 0xed0) & 1) != 0) ||
           (((*(uint *)(param_1 + 0xec8) & 1) != 0 && (param_2 != 1)))) {
          *(undefined8 *)(param_1 + 0x1980) = 0;
          *(undefined8 *)(param_1 + 0x1988) = 0;
          *(undefined8 *)(param_1 + 0x19d0) = 0;
          *(undefined2 *)(param_1 + 0x19d8) = 0;
          *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
          *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
          *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
          *(undefined8 *)(param_1 + 0x1990) = 0;
          *(undefined8 *)(param_1 + 0x1998) = 0;
          *(undefined8 *)(param_1 + 0x19a0) = 0;
          *(undefined8 *)(param_1 + 0x19a8) = 0;
          *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
          *(undefined8 *)(param_1 + 0x19b0) = 0;
          *(undefined8 *)(param_1 + 0x19b8) = 0;
          *(undefined8 *)(param_1 + 0x19c0) = 0;
          *(undefined8 *)(param_1 + 0x19c8) = 0;
          local_24 = 0xf7;
          *(char *)(param_1 + 0x1980) = (char)param_2;
          *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
          *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
          *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
          *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
          *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
          *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
          *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
          *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
          *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
          *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
          *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
          *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
          *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
          *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
          *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
          *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
          uVar2 = 0xf7;
          lVar5 = 0;
          if (*(long *)(param_1 + 0x70) != 0) {
            lVar5 = *(long *)(param_1 + 0x70) + 0x278;
          }
          goto LAB_024680c0;
        }
        local_24 = 3;
        if ((((*(uint *)(param_1 + 0xed0) >> 3 & 1) != 0) &&
            ((uVar4 = FUN_0243bb28(param_1), (uVar4 & 1) == 0 ||
             (uVar4 = FUN_02559da8(), (uVar4 & 1) == 0)))) &&
           ((DAT_056b6f18 == 0 || (*(int *)(DAT_056b6f18 + 0x588) == 0)))) {
          FUN_02372704(param_1,0xf9,0,1);
          return 1;
        }
      }
    }
  }
  else if ((*(char *)(param_1 + 0x17ac) == '\0') &&
          (local_24 = 3, (*(uint *)(param_1 + 0xed0) >> 3 & 1) != 0)) {
    if ((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
      bVar7 = *(byte *)(param_1 + 0x1ee8);
      pbVar1 = &DAT_0548e140;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      bVar6 = *pbVar1;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      if (bVar6 != bVar7) {
        pbVar1 = &DAT_0548e140;
        if (*(long *)PTR_DAT_04bb4718 != 0) {
          pbVar1 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a4);
        }
        if (*pbVar1 < 8) {
          if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
            iVar3 = FUN_02582d8c(pbVar1,2);
            if (-1 < iVar3) {
              return 0;
            }
          }
          else {
            local_24 = (uint)*pbVar1;
            uVar4 = FUN_01d3e2d0(*DAT_0537d558 + 8,&local_24);
            if ((uVar4 & 1) != 0) {
              return 0;
            }
          }
        }
      }
    }
    if ((DAT_056b6f18 == 0) || (*(int *)(DAT_056b6f18 + 0x588) == 0)) {
      local_24 = 0xf9;
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
      *(undefined8 *)(param_1 + 0x18c0) = 0;
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
      *(undefined8 *)(param_1 + 0x18c8) = 0;
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
      *(undefined8 *)(param_1 + 0x18d0) = 0;
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
      *(undefined8 *)(param_1 + 0x18a0) = 0;
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
      *(undefined8 *)(param_1 + 0x18a8) = 0;
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
      *(undefined8 *)(param_1 + 0x18b0) = 0;
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
      *(undefined8 *)(param_1 + 0x18b8) = 0;
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
      *(undefined8 *)(param_1 + 0x1880) = 0;
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1888) = 0;
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
      *(undefined8 *)(param_1 + 0x1890) = 0;
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
      *(undefined8 *)(param_1 + 0x1898) = 0;
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
      uVar2 = 0xf9;
      lVar5 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar5 = *(long *)(param_1 + 0x70) + 0x278;
      }
LAB_024680c0:
      FUN_03ebb160(lVar5,uVar2);
      return 1;
    }
  }
  return 0;
}

